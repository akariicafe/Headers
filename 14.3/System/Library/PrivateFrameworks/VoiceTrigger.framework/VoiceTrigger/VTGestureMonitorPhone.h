@class NSString, CMWakeGestureManager;

@interface VTGestureMonitorPhone : VTGestureMonitor <CMWakeGestureDelegate> {
    CMWakeGestureManager *_gestureManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
