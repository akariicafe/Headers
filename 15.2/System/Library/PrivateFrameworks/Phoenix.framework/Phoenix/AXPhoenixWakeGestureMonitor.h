@class NSString, CMWakeGestureManager;

@interface AXPhoenixWakeGestureMonitor : AXPhoenixEventMonitor <CMWakeGestureDelegate>

@property (nonatomic) double wakeGestureTimestamp;
@property (nonatomic) double dismissalTimestamp;
@property (retain, nonatomic) CMWakeGestureManager *gestureManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)_stopMonitoring;
- (void).cxx_destruct;
- (id)init;
- (void)_didReceiveWakeGesture;
- (void)_didReceiveSleepGesture;
- (BOOL)isDeviceHandheld;

@end
