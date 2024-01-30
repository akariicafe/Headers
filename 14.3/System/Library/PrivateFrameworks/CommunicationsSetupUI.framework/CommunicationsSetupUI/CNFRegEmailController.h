@class NSString, NSArray, PSSpecifier, NSTimer;

@interface CNFRegEmailController : CNFRegFirstRunController {
    PSSpecifier *_emailSpecifier;
    PSSpecifier *_actionGroupSpecifier;
    PSSpecifier *_currentActionSpecifier;
    NSArray *_checkMailSpecifiers;
    NSTimer *_validationTimeoutTimer;
    BOOL _validating;
}

@property (copy, nonatomic) NSString *pendingAlias;

- (void).cxx_destruct;
- (void)systemApplicationWillEnterForeground;
- (id)bundle;
- (double)timeoutDuration;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)logName;
- (void)_updateUI;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)systemApplicationDidEnterBackground;
- (void)viewDidLoad;
- (id)titleString;
- (id)specifierList;
- (void)_setFieldsEnabled:(BOOL)a0 animated:(BOOL)a1;
- (void)_setupEventHandlers;
- (void)_stopValidationModeAnimated:(BOOL)a0;
- (void)_buildSpecifierCache:(id)a0;
- (id)aliasSpecifiers;
- (void)setAliasSelected:(id)a0;
- (void)_returnKeyPressed;
- (id)_rightButtonItem;
- (void)_handleValidationModeCancelled;
- (void)_updateControllerState;
- (void)_finishValidation;
- (void)_failValidationWithError:(id)a0;
- (void)stopValidationTimeoutTimer;
- (BOOL)shouldShowAllVettedAliases;
- (BOOL)_phoneNumberInAliases:(id)a0;
- (id)_createSpecifierForAlias:(id)a0;
- (void)nextTapped;
- (id)selectedAliases;
- (void)_showCheckMailButton:(BOOL)a0 animated:(BOOL)a1;
- (void)startValidationTimeoutTimer;
- (id)emailTextField;
- (BOOL)emailFieldIsEmpty;
- (void)_refreshEnabledStateOfAliasSpecifiers;
- (void)validationTimeout:(id)a0;
- (void)_buildEmailSpecifierCache:(id)a0;
- (void)_buildCheckMailSpecifierCache:(id)a0;
- (void)_buildActionGroupSpecifierCache:(id)a0;
- (BOOL)showActionSpecifier:(id)a0 animated:(BOOL)a1;
- (BOOL)onlyLocalPhoneNumberSentinelAliasIsSelected;
- (void)checkMailTapped:(id)a0;
- (void)emailFieldEmptyStateChanged:(id)a0 forSpecifier:(id)a1;
- (id)pendingAliasForSpecifier:(id)a0;
- (void)setPendingAlias:(id)a0 forSpecifier:(id)a1;

@end
