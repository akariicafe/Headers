@class NSString, CMWakeGestureManager;

@interface CSGestureMonitorPhone : CSGestureMonitor <CMWakeGestureDelegate> {
    CMWakeGestureManager *_gestureManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_stopMonitoring;
- (void)_startMonitoringWithQueue:(id)a0;
- (void)wakeGestureManager:(id)a0 didUpdateWakeGesture:(long long)a1;
- (void)_didReceiveWakeGesture;
- (void)_didReceiveSleepGesture;

@end
