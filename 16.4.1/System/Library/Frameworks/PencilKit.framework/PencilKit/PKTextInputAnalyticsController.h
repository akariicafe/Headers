@class NSTimer, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PKTextInputAnalyticsController : NSObject <UITextInputSessionActionAnalyticsEndingObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    long long _lastEventSource;
    unsigned long long _lastEventSourceChangeTimestamp;
    unsigned long long _eventSourceUsage[8];
    long long _lastActivePencilType;
    double _activePencilUsage;
}

@property (retain, nonatomic) NSTimer *eventSourceTimer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)beginObservingSessionAnalytics;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)didBeginSession;
- (void)didEndMatchingAccumulatorName:(id)a0;
- (id)matchingAccumulatorNames;
- (void)_dispatchAnalytics;
- (void)_setupAnalyticsTimer;
- (void)_updateAnalyticsTracking;
- (void)activePencilUsage:(id)a0;
- (void)didUpdateToEventSource:(long long)a0;
- (void)eventSourceDidChange:(id)a0;
- (void)messageHandwritingAnalyticsWithProxyBlock:(id /* block */)a0;
- (void)q_didBeginSession;
- (void)q_didEndMatchingAccumulatorName:(id)a0 inputMode:(id)a1;

@end
