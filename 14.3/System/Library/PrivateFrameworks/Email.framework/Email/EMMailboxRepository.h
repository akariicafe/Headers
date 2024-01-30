@class NSXPCInterface, NSString, NSOrderedSet, EMRemoteConnection, NSSet, NSMutableDictionary, NSObject, EFPromise, EMAccountRepository, NSMapTable;
@protocol OS_os_log, EFCancelable;

@interface EMMailboxRepository : EMRepository <EFLoggable, EMMailboxChangeObserver, EMMailboxTypeResolver> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mailboxesPromiseLock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_mailboxesByObjectID;
}

@property (class, readonly) NSXPCInterface *remoteInterface;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain) EMRemoteConnection *connection;
@property (retain, nonatomic) id<EFCancelable> registrationCancelable;
@property (readonly) NSOrderedSet *mailboxesIfAvailable;
@property (retain, nonatomic) EFPromise *mailboxesPromise;
@property (retain, nonatomic) NSMapTable *observerMap;
@property (readonly, nonatomic) EMAccountRepository *accountRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;

- (id)initInternal;
- (id)initForTesting;
- (void)mailboxListChanged:(id)a0;
- (id)performQuery:(id)a0 withObserver:(id)a1;
- (id)_filterIDsFromMailbox:(id)a0 withQuery:(id)a1;
- (id)initForTestingWithAccountRepository:(id)a0;
- (void).cxx_destruct;
- (void)_startObservingMailboxChangesIfNecessary;
- (id)_mailboxesFuture;
- (long long)mailboxTypeForMailboxObjectID:(id)a0;
- (id)mailboxForObjectID:(id)a0;
- (id)initWithRemoteConnection:(id)a0 accountRepository:(id)a1;
- (void)dealloc;
- (long long)remoteMailboxTypeForMailboxObjectID:(id)a0;
- (void)_restartObservingMailboxChangesIfNecessary;
- (id)remoteAllMailboxObjectIDs;
- (id)mailboxObjectIDsForMailboxType:(long long)a0;
- (id)performMailboxChangeAction:(id)a0;
- (void)_prepareMailboxes:(id)a0;
- (void)performQuery:(id)a0 completionHandler:(id /* block */)a1;
- (void)_commonInitWithAccountRepository:(id)a0;
- (void)refreshMailboxList;
- (id)mailboxesForObjectIDs:(id)a0;
- (id)remoteMailboxObjectIDsForMailboxType:(long long)a0;

@end
