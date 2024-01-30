@class NSObject, STUsageGraphViewController, UIPageViewController, NSString, UIView, STUsageSummaryTitleView, NSLayoutConstraint;
@protocol STUsageDetailsViewModelCoordinator;

@interface STHistoricalUsageViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate>

@property (readonly) unsigned long long type;
@property (readonly) double graphHeight;
@property (retain, nonatomic) STUsageGraphViewController *selectedWeekGraphViewController;
@property (retain) STUsageGraphViewController *selectedDayGraphViewController;
@property (retain) UIPageViewController *weekGraphPageViewController;
@property (retain) UIPageViewController *dayGraphPageViewController;
@property (retain) STUsageSummaryTitleView *titleView;
@property (retain) UIView *weekGraphContainerView;
@property (retain) UIView *dayGraphContainerView;
@property (retain) NSLayoutConstraint *weekGraphContainerHeightConstraint;
@property (retain) NSLayoutConstraint *dayGraphContainerHeightConstraint;
@property (nonatomic) double maximumYAxisLabelWidth;
@property long long currentViewMode;
@property (retain, nonatomic) NSObject<STUsageDetailsViewModelCoordinator> *coordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)historicalUsageViewControllerOfType:(unsigned long long)a0 graphHeight:(double)a1;

- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (void).cxx_destruct;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)dealloc;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidLoad;
- (void)prepareForSegue:(id)a0 sender:(id)a1;
- (void)_selectedWeekUsageReportDidChange:(id)a0;
- (void)_selectedDayUsageReportDidChangeFrom:(id)a0 to:(id)a1;
- (void)_selectedBarViewDidChangeFrom:(id)a0 to:(id)a1;
- (id)_weekGraphViewControllerForWeek:(unsigned long long)a0 usageReport:(id)a1;
- (id)_dataSetFromUsageReport:(id)a0;
- (id)_dayGraphViewControllerForDay:(unsigned long long)a0 week:(unsigned long long)a1 usageReport:(id)a2;
- (id)_nextGraphViewControllerForPageViewController:(id)a0 currentGraphViewController:(id)a1 direction:(long long)a2;

@end
