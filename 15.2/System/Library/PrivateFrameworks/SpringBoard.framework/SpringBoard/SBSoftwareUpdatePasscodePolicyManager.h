@class NSString, SBFMobileKeyBag, SBSoftLockoutController;

@interface SBSoftwareUpdatePasscodePolicyManager : NSObject <SBSoftLockoutControllerDelegate> {
    long long _softwareUpdatePasscodePolicy;
    SBSoftLockoutController *_softLockoutController;
    SBFMobileKeyBag *_mobileKeyBag;
    BOOL _passcodeAuthenticationSuccessPending;
}

@property (nonatomic) long long softwareUpdatePasscodePolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)requiresLockout;
- (long long)_effectiveSoftwareUpdatePasscodePolicy;
- (void)_authRequestCompleted:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)noteAuthenticationSucceededWithPasscode:(id)a0;
- (void)dealloc;
- (id)initWithLockScreenManager:(id)a0 mobileKeyBag:(id)a1;
- (BOOL)consumePendingUnlock;

@end
