@class NSMutableDictionary, NSObject;
@protocol VIAnalyticsTestingDelegate, OS_dispatch_queue, SFFeedbackListener;

@interface VIAEntryPointLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    id<SFFeedbackListener> _feedbackListener;
    NSMutableDictionary *_appToQueryIDMap;
    NSMutableDictionary *_appToWaitingEventMap;
}

@property (weak, nonatomic) id<VIAnalyticsTestingDelegate> testingDelegate;

- (void)logEvent:(id)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 feedbackListener:(id)a1;
- (void)logDependentEvent:(id)a0;
- (BOOL)_preconditionCheckEvent:(id)a0;
- (void)_logStartEvent:(id)a0;
- (void)_logEndEvent:(id)a0;
- (void)_cacheEvent:(id)a0;
- (id)_cachedEventsForEvent:(id)a0;
- (void)_logFeedback:(id)a0 queryID:(unsigned long long)a1;

@end
