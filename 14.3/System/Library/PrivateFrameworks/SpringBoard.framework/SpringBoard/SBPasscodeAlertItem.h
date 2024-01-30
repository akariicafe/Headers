@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate> {
    int _mode;
    int _unlockScreenType;
    int _simplePasscodeType;
    NSString *_errorString;
    BOOL _hasEmergencyCall;
    BOOL _alreadySubmittedPassword;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)shouldShowInLockScreen;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)submitPassword;
- (void)_clearAlertController;
- (void)configureTextField:(id)a0;
- (void)makeEmergencyCall;
- (id)initWithPasscodeMode:(int)a0 unlockScreenType:(int)a1 simplePasscodeType:(int)a2;
- (void)_setErrorString:(id)a0;
- (void)didEndCall;

@end
