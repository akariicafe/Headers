@class FBSDisplayLayoutMonitor, NSString, AFMyriadCoordinator, CMMotionActivityManager, NSObject, SASLockStateMonitor;
@protocol OS_dispatch_semaphore, SASMyriadControllerDelegate;

@interface SASMyriadController : NSObject <SASLockStateMonitorDelegate, AFMyriadDelegate> {
    id<SASMyriadControllerDelegate> _delegate;
    AFMyriadCoordinator *_myriadCoordinator;
    BOOL _isLocked;
    NSObject<OS_dispatch_semaphore> *_myriadFinishedSemaphore;
    FBSDisplayLayoutMonitor *_displayMonitor;
    double _raiseToWakeTime;
    SASLockStateMonitor *_lockStateMonitor;
    BOOL _isStationary;
    double _liftEndTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activityManagerLock;
    CMMotionActivityManager *_activityManager;
}

@property (nonatomic) BOOL canceledByMyriad;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)activateForInTaskRequest:(BOOL)a0 isVisible:(BOOL)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_updateRaiseToWakeTimeForTransition:(id)a0;
- (void)shouldContinue:(id)a0;
- (void)_configureMotionActivityManager;
- (BOOL)activateForRequest:(id)a0 visible:(BOOL)a1;
- (void)shouldAbortAnotherDeviceBetter:(id)a0;
- (id)initWithDelegate:(id)a0;
- (void)didChangeLockState:(unsigned long long)a0 toState:(unsigned long long)a1;

@end
