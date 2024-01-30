@class WFWorkflowSettingsViewDataSource, NSString, UINavigationController, WFAddToHomeScreenActivity, WFHealthFeatureAvailability, WFWorkflowSettingsLayoutMetrics, WFWorkflow, WFDatabase;
@protocol WFWorkflowSettingsViewControllerDelegate;

@interface WFWorkflowSettingsViewController : UITableViewController <WFAddToHomeScreenActivityDelegate, UIViewControllerTransitioningDelegate, WFContentClassesViewControllerDelegate, WFGalleryImportViewControllerDelegate, WFWorkflowWizardNameCellDelegate, WFWorkflowSettingsViewDataSourceDelegate, WFTableViewFooterLinkViewDelegate, WFHealthFeatureObserver>

@property (retain, nonatomic) WFWorkflow *workflow;
@property (retain, nonatomic) WFDatabase *database;
@property (retain, nonatomic) WFAddToHomeScreenActivity *homeScreenActivity;
@property (readonly, nonatomic) WFWorkflowSettingsLayoutMetrics *layoutMetrics;
@property (retain, nonatomic) UINavigationController *cardPresentationNavigationController;
@property (retain, nonatomic) WFWorkflowSettingsViewDataSource *dataSource;
@property (readonly, nonatomic) WFHealthFeatureAvailability *healthFeatureAvailability;
@property (weak, nonatomic) id<WFWorkflowSettingsViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)contentSizeCategoryDidChange;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didTapDone;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)accessibilityPerformEscape;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)healthFeatureAvailability:(id)a0 sleepOnboardingStatusDidChange:(unsigned long long)a1;
- (id)initWithWorkflow:(id)a0 database:(id)a1;
- (void)workflowWizardNameCellDidSelectEditIcon:(id)a0;
- (void)workflowWizardNameCell:(id)a0 didUpdateName:(id)a1;
- (void)contentClassesViewController:(id)a0 didChangeSelectedClasses:(id)a1;
- (void)footerLinkView:(id)a0 didTapURL:(id)a1;
- (void)toggledActionExtensionSwitch:(id)a0;
- (void)toggledWatchSwitch:(id)a0;
- (void)toggledBedSheetSwitch:(id)a0;
- (void)galleryImportViewControllerDidCancel:(id)a0;
- (void)galleryImportViewController:(id)a0 didFinishWithWorkflow:(id)a1;
- (void)homeScreenActivityDidFinish:(id)a0 success:(BOOL)a1;
- (void)finishByDismissing:(BOOL)a0;
- (void)invalidateLayoutMetrics;
- (BOOL)showInputTypeSelection;
- (id)watchIneligibleActions;
- (void)toggleWorkflowType:(id)a0 sender:(id)a1;
- (void)didSelectSettingsSectionHelpAtRow:(long long)a0;
- (void)didSelectSettingsSectionShowInAtRow:(long long)a0;
- (void)didSelectSettingsSectionButtonsAtRow:(long long)a0;
- (void)didSelectSettingsSectionImportQuestionsAtRow:(long long)a0;
- (void)dismissIconViewController;

@end
