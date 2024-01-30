@class AXEventProcessor, NSString, AXPhoenixMitigatorConfiguration, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, AXPhoenixMitigatorDelegate;

@interface AXPhoenixMitigator : NSObject <AXPhoenixEventMonitorObserver, AXPhoenixDeviceLockMonitorObserver, AXPhoenixWakeGestureMonitorObserver, AXPhoenixDisplayStatusMonitorObserver> {
    id<AXPhoenixMitigatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_monitors;
    AXPhoenixMitigatorConfiguration *_configuration;
    BOOL _isRunning;
    AXEventProcessor *_eventProcessor;
}

@property (nonatomic) BOOL isHandHeld;
@property (nonatomic) double lastWakeGestureTimestamp;
@property (nonatomic) double lastDismissalTimestamp;
@property (nonatomic) BOOL touchOn;
@property (nonatomic) double lastTouchInteractionGainTimestamp;
@property (nonatomic) double lastTouchInteractionLossTimestamp;
@property (nonatomic) BOOL displayOn;
@property (nonatomic) double lastDisplayOnTimestamp;
@property (nonatomic) double lastDisplayOffTimestamp;
@property (nonatomic) BOOL deviceLocked;
@property (nonatomic) double lastDeviceLockedTimestamp;
@property (nonatomic) double lastDeviceUnlockedTimestamp;
@property (nonatomic) int policyOption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)configuration;
- (BOOL)isRunning;
- (void)dealloc;
- (void)_subscribeEventMonitors;
- (id)initWithDelegate:(id)a0 configuration:(id)a1;
- (void)stop;
- (void)startWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_contextInfo:(BOOL)a0;
- (void)_shouldTriggerEventWithTapData:(struct { double x0; double x1; double x2; double x3; })a0 isDoubleTap:(BOOL)a1 completion:(id /* block */)a2;
- (void)_subscribeEventMonitor:(id)a0;
- (void)_unsubscribeEventMonitors;
- (void)gestureMonitorDidReceiveSleepGesture:(id)a0 timestamp:(double)a1;
- (void)gestureMonitorDidReceiveWakeGesture:(id)a0 timestamp:(double)a1;
- (void)phoenixDeviceLockMonitor:(id)a0 didReceiveDeviceLockStateChanged:(BOOL)a1 timestamp:(double)a2;
- (void)phoenixDisplayStatusMonitor:(id)a0 didReceiveDisplayStateChanged:(BOOL)a1 timestamp:(double)a2;
- (void)phoenixEventMonitorDidReceiveEvent:(id)a0;
- (void)setTouchOn:(BOOL)a0 timestamp:(double)a1;
- (void)shouldTriggerDoubleTapEventWithTapData:(struct { double x0; double x1; double x2; double x3; })a0 completion:(id /* block */)a1;
- (void)shouldTriggerTripleTapEventWithTapData:(struct { double x0; double x1; double x2; double x3; })a0 completion:(id /* block */)a1;

@end
