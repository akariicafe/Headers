@class NSString, BSAbsoluteMachTimer, SWSystemSleepMonitor;
@protocol SWSystemActivityProviding;

@interface SWSystemActivityAssertion : NSObject <SWSystemSleepObserver, BSInvalidatable> {
    NSString *_identifier;
    BSAbsoluteMachTimer *_lock_timeoutTimer;
    SWSystemSleepMonitor *_sleepMonitor;
    id<SWSystemActivityProviding> _provider;
    unsigned int _lock_assertionID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    id /* block */ _lock_acquisitionHandler;
    unsigned long long _lock_startKernelAPWakeTime;
    unsigned long long _lock_state;
    double _lock_timeout;
    BOOL _lock_wasSleepImminent;
    BOOL _lock_didFailToRevertPendingSleep;
    BOOL _lock_clientDidInvalidate;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)dealloc;
- (void)systemSleepMonitorSleepRequestAborted:(id)a0;
- (void)systemSleepMonitorWillWakeFromSleep:(id)a0;
- (id)initWithIdentifier:(id)a0 sleepMonitor:(id)a1 systemActivityProvider:(id)a2;
- (void)acquireWithTimeout:(double)a0 handler:(id /* block */)a1;

@end
