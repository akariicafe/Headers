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
@property (retain) id<EFCancelable> registrationCancelable;
@property (readonly) NSOrderedSet *mailboxesIfAvailable;
@property (retain, nonatomic) EFPromise *mailboxesPromise;
@property (retain, nonatomic) NSMapTable *observerMap;
@property (readonly, nonatomic) EMAccountRepository *accountRepository;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;

- (id)initForTesting;
- (id)initInternal;
- (void).cxx_destruct;
- (void)mailboxListChanged:(id)a0;
- (void)dealloc;
- (void)refreshQueryWithObserver:(id)a0;
- (id)performQuery:(id)a0 withObserver:(id)a1;
- (void)refreshMailboxList;
- (id)initWithRemoteConnection:(id)a0 accountRepository:(id)a1;
- (void)_restartObservingMailboxChangesIfNecessary;
- (void)_commonInitWithAccountRepository:(id)a0;
- (id)initForTestingWithAccountRepository:(id)a0;
- (void)_startObservingMailboxChangesIfNecessary;
- (id)_mailboxesFuture;
- (id)_filterIDsFromMailbox:(id)a0 withQuery:(id)a1;
- (id)mailboxForObjectID:(id)a0;
- (id)mailboxIfAvailableForObjectID:(id)a0;
- (id)remoteAllMailboxObjectIDs;
- (id)remoteMailboxObjectIDsForMailboxType:(long long)a0;
- (long long)remoteMailboxTypeForMailboxObjectID:(id)a0;
- (void)_prepareMailboxes:(id)a0;
- (id)mailboxObjectIDsForMailboxType:(long long)a0;
- (long long)mailboxTypeForMailboxObjectID:(id)a0;
- (void)performQuery:(id)a0 completionHandler:(id /* block */)a1;
- (id)mailboxesForObjectIDs:(id)a0;
- (id)mailboxesIfAvailableForObjectIDs:(id)a0;
- (id)performMailboxChangeAction:(id)a0;

@end
