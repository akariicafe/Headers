@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;

@interface IMDMessageHistorySyncController : NSObject

@property (nonatomic) BOOL replayControllerNeedsSync;
@property (nonatomic) BOOL ckChatSyncControllerNeedsSync;
@property (nonatomic) BOOL idsTransportLogNeedsSync;
@property (retain, nonatomic) id<IMDMessageHistorySyncTask> currentlyExecutingSyncTask;
@property (retain, nonatomic) id<IMDMessageHistorySyncTaskFactory> syncTaskFactory;

- (void)dealloc;
- (id)initWithMessageHistorySyncTaskFactory:(id)a0;
- (void)ckChatSyncControllerWantsToSync;
- (void)replayControllerWantsToSync;
- (void)IDSTransportLogWantsToSync;
- (void)_evaluateStateAndActIfNeeded;
- (void)_scheduleNextEvaluation;

@end
