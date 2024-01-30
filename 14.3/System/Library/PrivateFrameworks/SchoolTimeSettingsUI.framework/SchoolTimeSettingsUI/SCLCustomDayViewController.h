@class SCLSettingsViewModel;
@protocol SCLCustomDayViewControllerDelegate;

@interface SCLCustomDayViewController : SCLListViewController

@property (readonly, nonatomic) SCLSettingsViewModel *viewModel;
@property (weak, nonatomic) id<SCLCustomDayViewControllerDelegate> delegate;

- (void)willMoveToParentViewController:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0 title:(id)a1;
- (void)loadSpecifierSource;

@end
