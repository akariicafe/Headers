@class NSString, BSZeroingWeakReference, NSObject;
@protocol OS_dispatch_queue;

@interface SWSystemSleepMonitorProvider : NSObject <SWSystemSleepMonitorProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_lock_queue;
    BSZeroingWeakReference *_lock_weakDelegateWrapper;
    unsigned int _lock_systemPowerConnection;
    struct IONotificationPort { } *_lock_systemPowerPort;
    unsigned int _lock_systemPowerNotifier;
    BOOL _lock_registered;
    BOOL _lock_invalidated;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)allowPowerChange:(long long)a0;
- (void)cancelPowerChange:(long long)a0;
- (void)registerForSystemPowerOnQueue:(id)a0 withDelegate:(id)a1;

@end
