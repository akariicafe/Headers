@class NSTimer;
@protocol IMDMessagePTaskStore;

@interface IMDMessageProcessingController : NSObject

@property (retain, nonatomic) id<IMDMessagePTaskStore> pTaskStore;
@property (retain, nonatomic) NSTimer *processingTimer;

- (BOOL)_pref_IMDCoreSpotlightHasMigrated;
- (void)_indexSpotlightIfNeedForPTask:(id)a0;
- (void)messageProcessingTaskAdded:(id)a0;
- (void)_xpc_IMDCoreSpotlightAddMessageGUID:(id)a0;
- (void)dealloc;
- (void)_scheduleDeferredProcessingWithTimeInterval:(double)a0;
- (void)_processingTimerFired;
- (id)init;
- (id)initWithMessagesPTaskStore:(id)a0;
- (void)scheduleInitialProcessingCheck;

@end
