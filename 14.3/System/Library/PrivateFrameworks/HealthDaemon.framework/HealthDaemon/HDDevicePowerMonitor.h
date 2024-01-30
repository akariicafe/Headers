@class CUPowerSourceMonitor, HKObserverSet, NSObject;
@protocol OS_dispatch_queue;

@interface HDDevicePowerMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    HKObserverSet *_observers;
    CUPowerSourceMonitor *_monitor;
    BOOL _isCharging;
}

@property (readonly) BOOL primarySourceIsCharging;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)powerSourceFound:(id)a0;
- (void)powerSourceLost:(id)a0;
- (void)powerSource:(id)a0 changed:(unsigned int)a1;
- (void)_queue_updatePrimaryPowerSourceState:(int)a0;
- (void)addDevicePowerObserver:(id)a0 queue:(id)a1;
- (void)removeDevicePowerObserver:(id)a0;

@end
