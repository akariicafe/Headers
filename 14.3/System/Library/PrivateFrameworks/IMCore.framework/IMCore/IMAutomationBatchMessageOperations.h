@interface IMAutomationBatchMessageOperations : NSObject

- (id)sendMessagesfromReplayDatabase:(id)a0 userInfo:(id)a1 error:(id *)a2;
- (id)beginRecordingMessagesToReplayDatabase:(id)a0 error:(id *)a1;
- (id)stopRecordingDatabaseError:(id *)a0;

@end
