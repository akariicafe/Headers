@class NSArray, UIPageViewController, NSString;

@interface PXPeoplePageWrapperViewController : UIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource>

@property (readonly, nonatomic) UIPageViewController *pageViewController;
@property (retain) NSArray *viewControllers;
@property (nonatomic) long long presentationPageIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (void).cxx_destruct;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)commonInit;
- (void)dealloc;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_showViewControllerAtIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)updateForEnteringSelectMode:(id)a0;
- (void)updateForExitingSelectMode:(id)a0;
- (void)updateForSelectionChanged:(id)a0;
- (void)_updateNavigationItemForCurrentViewController:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)presentationCountForPageViewController:(id)a0;
- (long long)presentationIndexForPageViewController:(id)a0;
- (id)initWithViewControllers:(id)a0;
- (void)viewDidLoad;

@end
