@class NSArray, NSMapTable, NSSet, NSString, MFMailboxUidTransformer, NSObject;
@protocol EFScheduler, EDAccountsProvider, OS_dispatch_queue, EDMailboxProviderDelegate;

@interface MFMailboxProvider : NSObject <EDMailboxProvider> {
    _Atomic int _deferringInvalidationCount;
    BOOL _needsToInvalidate;
}

@property (weak, nonatomic) id<EDAccountsProvider> accountsProvider;
@property (retain, nonatomic) MFMailboxUidTransformer *mailboxUidTransformer;
@property (retain) NSMapTable *uidToMailboxMap;
@property (retain) NSMapTable *objectIDToUidMap;
@property (retain) NSArray *allMailboxCache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *mailboxCacheQueue;
@property (retain, nonatomic) id<EFScheduler> observerScheduler;
@property (weak, nonatomic) id<EDMailboxProviderDelegate> delegate;
@property (readonly, nonatomic) NSSet *allMailboxObjectIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mailboxFromLegacyMailbox:(id)a0;
- (void)_willReloadMailboxList:(id)a0;
- (id)initWithAccountsProvider:(id)a0;
- (void).cxx_destruct;
- (void)_mailboxInvalidated:(id)a0;
- (long long)mailboxTypeForMailboxObjectID:(id)a0;
- (id)mailboxForObjectID:(id)a0;
- (id)legacyMailboxesForObjectIDs:(id)a0;
- (void)_didChangeMailboxList:(id)a0;
- (void)_willFetchMailboxList:(id)a0;
- (void)_beginDeferringInvalidation;
- (void)invalidateMailboxes;
- (id)mailboxObjectIDsForMailboxType:(long long)a0;
- (void)_didFetchMailboxList:(id)a0;
- (id)allMailboxes;
- (id)legacyMailboxForObjectID:(id)a0;
- (void)_populateCache;
- (void)_didReloadMailboxList:(id)a0;
- (void)enumerateAccountsWithBlock:(id /* block */)a0;
- (void)fetchMailboxes;
- (id)mailboxesFromLegacyMailboxes:(id)a0;
- (void)_endDeferringInvalidation;
- (void)_invalidateCache;
- (BOOL)_isDeferringInvalidation;

@end
