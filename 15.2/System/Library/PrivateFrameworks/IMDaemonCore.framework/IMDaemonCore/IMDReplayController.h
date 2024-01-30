@class NSDictionary, IMDReplayStorageIterationContext, IMDReplayStorageController;

@interface IMDReplayController : NSObject {
    IMDReplayStorageController *_suspendedStorageController;
}

@property (retain, nonatomic) NSDictionary *syncTaskByServiceName;
@property (retain, nonatomic) IMDReplayStorageIterationContext *heldDeletionContext;
@property (copy, nonatomic) id /* block */ automationCompletionBlock;
@property (retain, nonatomic) IMDReplayStorageController *storageController;
@property (readonly, nonatomic) BOOL isRecordingReplayDB;

+ (id)sharedInstance;
+ (long long)batchSize;

- (id)init;
- (void)dealloc;
- (BOOL)storeMessage:(id)a0 type:(unsigned char)a1 error:(id *)a2;
- (void)scheduleSyncTaskForServices:(id)a0;
- (void)replayMessages;
- (void)_fetchNexBatchOfMessagesAndReplay;
- (void)_processBatch:(id)a0;
- (void)endRecordingReplayDatabase;
- (id)initWithStorageController:(id)a0;
- (void)deleteReplayDBIfNotUnderFirstUnlock;
- (void)overrideStorageControllerWithDatabaseFromPath:(id)a0;
- (void)restoreDefaultStoreControllerInstance;
- (void)startRecordingReplayDatabase;
- (void)replayMessagesWithCompletion:(id /* block */)a0;

@end
