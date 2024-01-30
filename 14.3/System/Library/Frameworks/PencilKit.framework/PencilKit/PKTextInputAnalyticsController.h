@class NSTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PKTextInputAnalyticsController : NSObject <UITextInputSessionActionAnalyticsEndingObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastEventSource;
    unsigned long long _lastEventSourceChangeTimestamp;
    unsigned long long _eventSourceUsage[7];
}

@property (retain, nonatomic) NSTimer *eventSourceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)beginObservingSessionAnalytics;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)matchingAccumulatorNames;
- (void)didEndMatchingAccumulatorName:(id)a0;
- (void)_setupAnalyticsTimer;
- (void)eventSourceDidChange:(id)a0;
- (void)q_didEndMatchingAccumulatorName:(id)a0 inputMode:(id)a1;
- (void)messageHandwritingAnalyticsWithProxyBlock:(id /* block */)a0;
- (void)didUpdateToEventSource:(long long)a0;
- (void)_updateAnalyticsTracking;
- (void)_dispatchAnalytics;

@end
