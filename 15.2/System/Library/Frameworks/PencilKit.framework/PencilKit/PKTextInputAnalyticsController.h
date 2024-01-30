@class NSTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PKTextInputAnalyticsController : NSObject <UITextInputSessionActionAnalyticsEndingObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastEventSource;
    unsigned long long _lastEventSourceChangeTimestamp;
    unsigned long long _eventSourceUsage[8];
}

@property (retain, nonatomic) NSTimer *eventSourceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)beginObservingSessionAnalytics;

- (void)didBeginSession;
- (id)matchingAccumulatorNames;
- (void)didEndMatchingAccumulatorName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_setupAnalyticsTimer;
- (void)eventSourceDidChange:(id)a0;
- (void)q_didBeginSession;
- (void)messageHandwritingAnalyticsWithProxyBlock:(id /* block */)a0;
- (void)q_didEndMatchingAccumulatorName:(id)a0 inputMode:(id)a1;
- (void)didUpdateToEventSource:(long long)a0;
- (void)_updateAnalyticsTracking;
- (void)_dispatchAnalytics;

@end
