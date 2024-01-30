@class NSString, SBFMobileKeyBag, SBSoftLockoutController;

@interface SBiCloudPasscodeRequirementLockoutController : NSObject <SBSoftLockoutControllerDelegate> {
    SBSoftLockoutController *_lockOutController;
    SBFMobileKeyBag *_mobileKeybag;
    BOOL _providedPasscode;
}

@property (readonly, nonatomic) BOOL desiresPasscode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_deviceHasComplexPasscode;
- (BOOL)requiresLockout;
- (void).cxx_destruct;
- (void)dealloc;
- (void)noteAuthenticationSucceededWithPasscode:(id)a0;
- (id)initWithLockScreenManager:(id)a0 mobileKeyBag:(id)a1;

@end
