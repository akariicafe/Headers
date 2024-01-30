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

- (id)initWithQueue:(id)a0;
- (void)_registerForBiometricUnlockAllowedChange;
- (void)_registerForPasscodeChange;
- (void)_updateIsPasscodeSet;
- (void).cxx_destruct;
- (void)_updateHasEnrolledPearlIdentities;
- (void)_registerForBKEnrollmentChange;
- (void)_updateIsBiometricUnlockAllowed;
- (void)_unregisterForBiometricUnlockAllowedChange;
- (void)dealloc;
- (void)_unregisterForBKEnrollmentChange;

@end
