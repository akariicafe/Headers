@class CompletionListTableViewController, UIViewController, UniversalSearchFirstTimeExperienceViewController;

@interface AbstractCatalogViewController : UIViewController

@property (readonly, nonatomic) double requiredContentWidth;
@property (readonly, nonatomic) UIViewController *foregroundChildViewController;
@property (readonly, nonatomic) CompletionListTableViewController *completionsViewController;
@property (readonly, nonatomic) CompletionListTableViewController *completionsViewControllerIfLoaded;
@property (readonly, nonatomic) UIViewController *startPageViewController;
@property (readonly, nonatomic) UniversalSearchFirstTimeExperienceViewController *universalSearchFirstTimeExperienceViewController;

- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)didGainOwnershipOfStartPageViewController;
- (void)updatePreferredContentSize;
- (void)didGainOwnershipOfCompletionsViewController;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)relinquishOwnershipOfCompletionsViewControllerFromCurrentParent;
- (void)relinquishOwnershipOfUniversalSearchFirstTimeExperienceViewControllerFromCurrentParent;
- (void)didGainOwnershipOfUniversalSearchFirstTimeExperienceViewController;
- (BOOL)isResponsibleForLayoutOfViewController:(id)a0;
- (BOOL)_takeOwnershipOfViewController:(id)a0;
- (void)_relinquishOwnershipOfViewControllerFromCurrentParent:(id)a0;
- (void)setForegroundChildViewControllerNeedsUpdate;
- (void)takeOwnershipOfCompletionsViewController;
- (void)takeOwnershipOfStartPageViewController;
- (void)relinquishOwnershipOfStartPageViewControllerFromCurrentParent;
- (void)takeOwnershipOfUniversalSearchFirstTimeExperienceViewController;

@end
