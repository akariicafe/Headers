@class NSTimer;
@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject

@property (retain, nonatomic) id<IMDMessagePTaskStore> pTaskStore;
@property (retain, nonatomic) NSTimer *processingTimer;

- (void)messageProcessingTaskAdded:(id)a0;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)a0;
- (BOOL)_pref_IMDCoreSpotlightHasMigrated;
- (id)init;
- (id)initWithMessagesPTaskStore:(id)a0;
- (void)scheduleInitialProcessingCheck;
- (void)dealloc;
- (void)_indexSpotlightIfNeedForPTask:(id)a0;
- (void)_processingTimerFired;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)a0;

@end
