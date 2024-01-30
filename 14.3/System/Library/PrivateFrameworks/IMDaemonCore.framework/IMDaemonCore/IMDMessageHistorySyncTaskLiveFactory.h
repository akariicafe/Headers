@class NSString, IMDReplayController, IMDAccountController, IMDCKSyncController;

@interface IMDMessageHistorySyncTaskLiveFactory : NSObject <IMDMessageHistorySyncTaskFactory> {
    IMDCKSyncController *_ckSyncController;
    IMDAccountController *_accountController;
    IMDReplayController *_replayController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (id)_initWithCKSyncController:(id)a0 accountController:(id)a1 replayController:(id)a2;
- (id)_newFirstUnlockReplaySyncTask;
- (id)_newIDSTransactionLogSyncTask;
- (id)_newKChatSyncTask;
- (id)newSyncTaskForType:(unsigned long long)a0;

@end
