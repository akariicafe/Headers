@class NSArray, NSString;
@protocol ABAssistantSyncDelegate;

@interface ABAssistantSyncWorker : NSObject <AFSyncHandler>

@property (weak) id<ABAssistantSyncDelegate> delegate;
@property (retain) NSArray *allContacts;
@property (retain) NSArray *contactsChanges;
@property long long syncIndex;
@property long long syncCount;
@property BOOL syncAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 forKey:(id)a2 beginInfo:(id)a3;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (id)syncSnapshotForKey:(id)a0;
- (id)syncVerificationKeyForKey:(id)a0;
- (id)_saDomainObjectWithReadactMeCard:(id)a0;
- (void)clearSyncCache;
- (id)getCurrentValidity;
- (void)registerChangeHistoryClientIdentifier:(id)a0;
- (void)unregisterChangeHistoryClientIdentifier:(id)a0;
- (BOOL)validateKey:(id)a0;

@end
