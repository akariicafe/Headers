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

- (double)timeoutDuration;
- (void)systemApplicationDidEnterBackground;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)systemApplicationWillEnterForeground;
- (void)viewDidLoad;
- (id)bundle;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_updateUI;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)titleString;
- (id)logName;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
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
