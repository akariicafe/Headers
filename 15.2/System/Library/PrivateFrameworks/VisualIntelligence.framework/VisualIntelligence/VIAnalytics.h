@class VIAEntryPointLogger, NSObject;
@protocol VIAnalyticsTestingDelegate, OS_dispatch_queue, SFFeedbackListener;

@interface VIAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    VIAEntryPointLogger *_entryPointLogger;
}

@property (readonly, nonatomic) id<SFFeedbackListener> feedbackListener;
@property (weak, nonatomic) id<VIAnalyticsTestingDelegate> testingDelegate;

+ (id)_shared;
+ (void)logEvent:(id)a0;

- (void).cxx_destruct;
- (void)_logEvent:(id)a0;
- (void)_performLogEvent:(id)a0;
- (id)initWithFeedbackListener:(id)a0;

@end
