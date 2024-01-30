@class NSString, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FigCaptureLockScreenPrewarmingMonitor : NSObject <FigCaptureDisplayLayoutObserver> {
    NSObject<OS_dispatch_queue> *_notifyQueue;
    int _biometricEnrollmentChangedToken;
    BOOL _haveEnrolledBiometricIdentities;
    int _activeBiometricOperationChangedToken;
    int _activeBiometricOperationType;
    long long _lastBiometricMatchCompleteTime;
    NSDictionary *_mobileKeyBagOptions;
    int _deviceLockStateChangedToken;
    int _deviceLockState;
    long long _lastDeviceUnlockTime;
    BOOL _onLockScreen;
    BOOL _addingLayoutObserver;
    BOOL _observingLayoutChanges;
    BOOL _isPrewarming;
    NSObject<OS_dispatch_source> *_delayedPrewarmTimer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)stop;
+ (void)start;

- (void)_stopMonitoring;
- (void)dealloc;
- (void)_startMonitoring;
- (id)_init;
- (void)_invalidate;
- (void)_registerForBiometricEnrollmentChangesAndStartMonitoring;
- (void)_updateActiveBiometricOperation:(int)a0;
- (void)_updateDeviceLockState;
- (void)_evaluatePrewarmingConditions;
- (BOOL)_shouldPrewarmForHostTime:(long long)a0;
- (void)_setIsPrewarming:(BOOL)a0;
- (void)_prewarmAfterDelay:(float)a0;
- (void)_cancelDelayedPrewarmTimer;
- (void)layoutMonitor:(id)a0 didUpdateLayoutWithForegroundApps:(id)a1 obscuredApps:(id)a2 transitioningApps:(id)a3 pipApps:(id)a4;

@end
