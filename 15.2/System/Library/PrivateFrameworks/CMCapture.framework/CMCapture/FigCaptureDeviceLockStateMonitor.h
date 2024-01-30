@class NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface FigCaptureDeviceLockStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_monitorQueue;
    NSMutableArray *_deviceLockStateObservers;
    int _deviceLockStateChangedToken;
    NSDictionary *_mobileKeyBagOptions;
    BOOL _deviceIsLocked;
    BOOL _invalid;
}

+ (void)initialize;
+ (id)sharedDeviceLockStateMonitor;

- (id)init;
- (void)dealloc;
- (void)addDeviceLockStateObserver:(id)a0;
- (void)removeDeviceLockStateObserver:(id)a0;

@end
