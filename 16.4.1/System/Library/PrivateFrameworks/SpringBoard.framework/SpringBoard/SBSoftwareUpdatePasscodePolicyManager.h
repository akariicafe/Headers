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
- (void)_authRequestCompleted:(id)a0;
- (void)noteAuthenticationSucceededWithPasscode:(id)a0;
- (BOOL)consumePendingUnlock;
- (void)dealloc;
- (id)initWithLockScreenManager:(id)a0 mobileKeyBag:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (long long)_effectiveSoftwareUpdatePasscodePolicy;

@end
