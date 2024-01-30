@class NSString, DNDStateService, DNDState, NSObject;
@protocol OS_dispatch_queue;

@interface DNDAWDMetricsService : NSObject <DNDStateUpdateListener> {
    NSObject<OS_dispatch_queue> *_queue;
    DNDStateService *_notificationsStateService;
    DNDState *_currentState;
    unsigned long long _lockState;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)stateService:(id)a0 didReceiveDoNotDisturbStateUpdate:(id)a1;
- (void)handleTransitionToUILocked:(BOOL)a0;
- (unsigned long long)_queue_currentAWDMetricState;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(id)a0;
- (void)_queue_postAWDMetric;
- (void)resume;

@end
