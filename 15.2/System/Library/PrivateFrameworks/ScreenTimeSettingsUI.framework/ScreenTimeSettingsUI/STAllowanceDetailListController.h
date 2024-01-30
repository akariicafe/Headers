@class UIColor, NSArray, PSSpecifier, STAllowance, NSString, NSObject;
@protocol STRootViewModelCoordinator, STAllowanceDetailListControllerDelegate;

@interface STAllowanceDetailListController : PSListController <PSDateTimePickerCellDelegate, STCustomizeDaysListControllerDelegate>

@property (retain, nonatomic) PSSpecifier *timeGroupSpecifier;
@property (retain, nonatomic) PSSpecifier *timeSpecifier;
@property (retain, nonatomic) PSSpecifier *timePickerSpecifier;
@property (retain, nonatomic) PSSpecifier *customizeDaysSpecifier;
@property (retain, nonatomic) PSSpecifier *selectedTimeSpecifier;
@property (retain, nonatomic) NSArray *budgetedItemSpecifiers;
@property BOOL didDeleteAllowance;
@property (retain, nonatomic) UIColor *defaultTimeCellDetailTextColor;
@property (weak, nonatomic) id<STAllowanceDetailListControllerDelegate> delegate;
@property (copy, nonatomic) STAllowance *allowance;
@property (nonatomic) BOOL isSetupController;
@property BOOL useBackButton;
@property (nonatomic) BOOL creatingNewAllowance;
@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willResignActive;
- (BOOL)canBeShownFromSuspendedState;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)shouldReloadSpecifiersOnResume;
- (id)initWithCoordinator:(id)a0;
- (void)loadView;
- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)datePickerChanged:(id)a0;
- (id)datePickerForSpecifier:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)saveButtonTapped:(id)a0;
- (void)updateSaveButton;
- (void)showOrHideCustomizeDaysSpecifier;
- (void)_setAllowanceEnabled:(id)a0 specifier:(id)a1;
- (id)_allowanceEnabled:(id)a0;
- (id)timeFooterText;
- (id)budgetTime;
- (void)showCustomizeDaysController:(id)a0;
- (id)createBudgetedItemSpecifiers;
- (void)confirmDeletion:(id)a0;
- (id)atEndOfLimitFooterText;
- (void)_setAskForMoreTime:(id)a0 specifier:(id)a1;
- (id)_askForMoreTime:(id)a0;
- (void)_editListButtonPressed:(id)a0;
- (BOOL)hasSetBudgetTimeOrCustomSchedule;
- (void)_showOrHidePickerSpecifierForSpecifier:(id)a0 highlight:(BOOL)a1;
- (BOOL)hasSetBudgetTime;
- (void)deleteAllowance:(id)a0;
- (id)_categoryDetailText:(id)a0;
- (void)customizeDaysListController:(id)a0 didFinishEditingTimeByDay:(id)a1;

@end
