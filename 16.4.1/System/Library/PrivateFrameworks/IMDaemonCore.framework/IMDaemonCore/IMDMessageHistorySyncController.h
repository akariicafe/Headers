@protocol IMDMessageHistorySyncTask, IMDMessageHistorySyncTaskFactory;

@interface IMDMessageHistorySyncController : NSObject

@property (nonatomic) BOOL replayControllerNeedsSync;
@property (nonatomic) BOOL ckChatSyncControllerNeedsSync;
@property (nonatomic) BOOL idsTransportLogNeedsSync;
@property (retain, nonatomic) id<IMDMessageHistorySyncTask> currentlyExecutingSyncTask;
@property (retain, nonatomic) id<IMDMessageHistorySyncTaskFactory> syncTaskFactory;

- (void)_evaluateStateAndActIfNeeded;
- (void)IDSTransportLogWantsToSync;
- (void)replayControllerWantsToSync;
- (void)ckChatSyncControllerWantsToSync;
- (void)dealloc;
- (id)initWithMessageHistorySyncTaskFactory:(id)a0;
- (void)_scheduleNextEvaluation;

@end
