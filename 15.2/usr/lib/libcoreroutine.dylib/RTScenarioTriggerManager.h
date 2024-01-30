@class RTLocationStore, RTPlatform, RTWiFiFootprintMonitor, NSString, RTMotionActivityManager, RTSettledStateTransitionStore;

@interface RTScenarioTriggerManager : RTNotifier <RTPurgable>

@property (readonly, nonatomic) unsigned long long interestedInConstantFootprint;
@property (readonly, nonatomic) unsigned long long interestedInSettledState;
@property (readonly, nonatomic) RTLocationStore *locationStore;
@property (readonly, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (readonly, nonatomic) unsigned long long motionSettledState;
@property (readonly, nonatomic) RTPlatform *platform;
@property (nonatomic) unsigned long long settledState;
@property (nonatomic) unsigned long long monitoredScenarioTriggerTypes;
@property (readonly, nonatomic) RTSettledStateTransitionStore *settledStateTransitionStore;
@property (readonly, nonatomic) RTWiFiFootprintMonitor *wifiFootprintMonitor;
@property (readonly, nonatomic) long long wiFiFootprintState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)scenarioTriggerTypeToNotificationName:(unsigned long long)a0;
+ (long long)settledStateTypeForScenarioTriggerSettledState:(unsigned long long)a0;
+ (id)settledStateName:(unsigned long long)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)_startMonitoringScenarioTriggerOfType:(unsigned long long)a0;
- (void)postScenarioTriggerNotification:(id)a0;
- (void)onMotionActivityManagerNotification:(id)a0;
- (void)_stopMonitoringScenarioTriggerOfType:(unsigned long long)a0;
- (void)setSettledStateAndSubmitMetricsForSettledState:(unsigned long long)a0;
- (id)initWithLocationStore:(id)a0 motionActivityManager:(id)a1 settledStateTransitionStore:(id)a2 wifiFootprintMonitor:(id)a3 platform:(id)a4;
- (void)setInterestedInSettledState:(unsigned long long)a0;
- (void)setInterestedInConstantFootprint:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_onMotionActivityManagerNotification:(id)a0;
- (id)init;
- (void)simulateScenarioTrigger:(id)a0 handler:(id /* block */)a1;
- (unsigned long long)_notificationNameToScenarioTriggerType:(id)a0;
- (void)_evaluateSettledState;
- (void)_onWiFiFootprintStateNotification:(id)a0;
- (void)dealloc;
- (void)onWiFiFootprintStateNotification:(id)a0;
- (id)initWithLocationStore:(id)a0 motionActivityManager:(id)a1 platform:(id)a2 settledState:(unsigned long long)a3 settledStateTransitionStore:(id)a4 wifiFootprintMonitor:(id)a5;
- (void)_postScenarioTriggerNotification:(id)a0;
- (void)setWiFiFootprintState:(long long)a0;
- (void)setMotionSettledState:(unsigned long long)a0;

@end
