@class VIAFeedbackSubmitter, NSArray, NSDictionary, VIAEventCache, NSObject;
@protocol VIAnalyticsTestingDelegate, OS_dispatch_queue;

@interface VIAnalytics : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSArray *_loggers;
    NSDictionary *_feedbackNameToLoggerMap;
    VIAEventCache *_eventCache;
}

@property (readonly, nonatomic) VIAFeedbackSubmitter *feedbackSubmitter;
@property (weak, nonatomic) id<VIAnalyticsTestingDelegate> testingDelegate;

+ (void)logEvent:(id)a0;
+ (id)_shared;

- (void)_logEvent:(id)a0;
- (id)serialQueue;
- (void).cxx_destruct;
- (void)_performLogEvent:(id)a0;
- (id)initWithFeedbackSubmitter:(id)a0;

@end
