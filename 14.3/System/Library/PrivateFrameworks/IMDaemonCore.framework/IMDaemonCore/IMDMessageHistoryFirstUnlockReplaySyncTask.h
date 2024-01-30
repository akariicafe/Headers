@class IMDReplayController;

@interface IMDMessageHistoryFirstUnlockReplaySyncTask : IMDMessageHistoryIDSTransactionLogSyncTask {
    IMDReplayController *_replayController;
}

- (void)dealloc;
- (id)initWithReplayController:(id)a0 accountController:(id)a1;
- (void)_setupAndBeginSync;
- (unsigned long long)syncTaskType;

@end
