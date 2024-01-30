@class VIAFeedbackSubmitter, NSString, VIAEventCache, NSObject;
@protocol OS_dispatch_queue;

@interface VIACacheHitLogger : NSObject <VIAEventLogging> {
    NSObject<OS_dispatch_queue> *_queue;
    VIAFeedbackSubmitter *_feedbackSubmitter;
    VIAEventCache *_engagementEventCache;
    VIAEventCache *_rankingEventCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)feedbackNamesToLog;

- (void)_logEvent:(id)a0;
- (void).cxx_destruct;
- (void)logEvent:(id)a0;
- (void)didObserveEvent:(id)a0;
- (id)initWithQueue:(id)a0 feedbackSubmitter:(id)a1;

@end
