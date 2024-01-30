@class BKDevice, NSObject;
@protocol OS_dispatch_queue;

@interface BBBiometricResource : NSObject {
    BOOL _isPasscodeSet;
    BOOL _isBiometricUnlockAllowed;
    BOOL _hasEnrolledPearlIdentities;
    BKDevice *_pearlDevice;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) BOOL hasPearlCapability;
@property (readonly, nonatomic) BOOL isPearlEnabledAndEnrolled;

- (void)_registerForBiometricUnlockAllowedChange;
- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)_unregisterForBiometricUnlockAllowedChange;
- (void)dealloc;
- (void)_registerForBKEnrollmentChange;
- (void)_registerForPasscodeChange;
- (void)_updateIsPasscodeSet;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_unregisterForBKEnrollmentChange;
- (void)_updateHasEnrolledPearlIdentities;

@end
