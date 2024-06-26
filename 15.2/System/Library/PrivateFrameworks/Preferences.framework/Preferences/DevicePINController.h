@class NSString, NSDictionary, NSNumber, UIBarButtonItem;

@interface DevicePINController : PSDetailController {
    int _mode;
    int _substate;
    NSString *_oldPassword;
    NSString *_lastEntry;
    BOOL _success;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_doneButton;
    NSString *_error1;
    NSString *_error2;
    BOOL _hasBeenDismissed;
    long long _sepOnceToken;
    NSDictionary *_sepLockInfo;
    BOOL _useSEPLockInfo;
    NSNumber *_requiresKeyboard;
    NSNumber *_pinLength;
    NSNumber *_simplePIN;
    NSNumber *_numericPIN;
}

@property (copy, nonatomic) NSString *passcodeOptionsTitle;
@property (copy, nonatomic) id /* block */ passcodeOptionsHandler;
@property (weak, nonatomic) id pinDelegate;
@property (nonatomic) BOOL hidesNavigationButtons;
@property (nonatomic) BOOL hidesCancelButton;
@property (nonatomic) BOOL shouldDismissWhenDone;
@property (copy, nonatomic) NSString *doneButtonTitle;
@property (nonatomic) BOOL requiresKeyboard;
@property (nonatomic) int pinLength;
@property (nonatomic) BOOL simplePIN;
@property (nonatomic, getter=isNumericPIN) BOOL numericPIN;
@property (nonatomic) BOOL allowOptionsButton;

+ (BOOL)settingEnabled;

- (void)setMode:(int)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)setPane:(id)a0;
- (void)setPIN:(id)a0;
- (void)viewWillLayoutSubviews;
- (id)pinPane;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateUI;
- (void)setSuccess:(BOOL)a0;
- (BOOL)isBlocked;
- (id)title;
- (void)setSpecifier:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (struct __CFString { } *)defaultsID;
- (BOOL)success;
- (void).cxx_destruct;
- (void)_rereadBlockedState;
- (id)stringsBundle;
- (BOOL)useProgressiveDelays;
- (struct CGSize { double x0; double x1; })overallContentSizeForViewInPopover;
- (id)_createAndShowAnimatedNavBarSpinner;
- (void)setLastEntry:(id)a0;
- (BOOL)isCreatingPasscode;
- (int)_getScreenType;
- (int)_simplePasscodeType;
- (struct __CFString { } *)failedAttemptsKey;
- (id)_sepLockInfo;
- (struct __CFString { } *)blockTimeIntervalKey;
- (struct __CFString { } *)blockedStateKey;
- (BOOL)_useSEPLockInfo;
- (void)_invalidateSEPLockInfo;
- (double)blockedTimeRemaining;
- (long long)numberOfFailedAttempts;
- (void)_setNumberOfFailedAttempts:(long long)a0;
- (id)stringsTable;
- (double)_secondsToBlockForFailedAttempts:(long long)a0;
- (void)_setUnblockTime:(double)a0;
- (void)_adjustUnblockTime;
- (void)_showFailedAttempts;
- (void)_updateErrorTextAndFailureCount:(BOOL)a0;
- (void)cancelButtonTapped;
- (BOOL)showSimplePINCancelButtonOnLeft;
- (void)_updatePINButtons;
- (void)adjustButtonsForPasswordLength:(unsigned long long)a0;
- (BOOL)_shouldShowOptionsButton;
- (BOOL)pinIsAcceptable:(id)a0 outError:(id *)a1;
- (void)_slidePasscodeFieldLeft:(BOOL)a0;
- (void)_showUnacceptablePINError:(id)a0 password:(id)a1;
- (BOOL)completedInputIsValid:(id)a0;
- (void)performActionAfterPINSet;
- (BOOL)_asyncSetPinCompatible;
- (void)setPIN:(id)a0 completion:(id /* block */)a1;
- (void)_showPINConfirmationError;
- (BOOL)attemptValidationWithPIN:(id)a0;
- (void)setOldPassword:(id)a0;
- (void)_removePinWithOldPassword:(id)a0;
- (void)performActionAfterPINEntry;
- (void)_preflightPasswordForWeakness:(id)a0 withCompletion:(id /* block */)a1;
- (void)performActionAfterPINRemove;
- (BOOL)_shouldCheckForWeakness;
- (id)passcodeOptionsAlertController;
- (id)init;
- (void)_setPINPaneToSimple:(BOOL)a0 simpleLength:(int)a1 numeric:(BOOL)a2 requiresKeyboard:(int)a3;
- (void)showPasscodeOptions:(id)a0;
- (id)pinInstructionsPrompt;
- (id)pinInstructionsPromptFont;
- (void)willUnlock;
- (void)suspend;
- (void)_dismiss;
- (BOOL)validatePIN:(id)a0;
- (void)_clearBlockedState;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (double)unblockTime;
- (void)pinEntered:(id)a0;
- (int)mode;

@end
