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

- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1;
- (id)init;
- (void).cxx_destruct;
- (void)_didReceiveSleepGesture;
- (void)_didReceiveWakeGesture;
- (BOOL)isDeviceHandheld;

@end
