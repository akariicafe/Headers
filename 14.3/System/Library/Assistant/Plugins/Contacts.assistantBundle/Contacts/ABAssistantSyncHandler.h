@class ABAssistantSyncWorker, NSString, CNContactStore;

@interface ABAssistantSyncHandler : NSObject <ABAssistantSyncHandler>

@property (retain, nonatomic) ABAssistantSyncWorker *syncWorker;
@property (retain, nonatomic) NSString *changeHistoryClientIdentifier;
@property (retain, nonatomic) CNContactStore *contactStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)beginSyncWithAnchor:(id)a0 validity:(id)a1 forKey:(id)a2 beginInfo:(id)a3;
- (void)getChangeAfterAnchor:(id)a0 changeInfo:(id)a1;
- (void)syncDidEnd;
- (id)syncSnapshotForKey:(id)a0;
- (id)syncVerificationKeyForKey:(id)a0;

@end
