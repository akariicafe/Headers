@class NSString, SKUIClientContext, UIPageViewController, NSOperationQueue, NSMutableDictionary;
@protocol SKUISlideshowViewControllerDelegate, SKUISlideshowViewControllerDataSource;

@interface SKUISlideshowViewController : UIViewController <UIPageViewControllerDataSource, UIPageViewControllerDelegate, SKUISlideshowItemViewControllerDelegate, UIViewControllerTransitioningDelegate> {
    UIPageViewController *_pageViewController;
    NSOperationQueue *_remoteLoadQueue;
    NSMutableDictionary *_itemViewControllersCache;
    BOOL _overlayVisible;
    BOOL _shouldCancelDelayedOverlayVisibilityChange;
    BOOL _overlayVisibilityWillChangeWithDelay;
    BOOL _lockOverlayControlsVisible;
    struct { long long style; BOOL hidden; } _savedStatusBarState;
}

@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (weak, nonatomic) id<SKUISlideshowViewControllerDataSource> dataSource;
@property (weak, nonatomic) id<SKUISlideshowViewControllerDelegate> delegate;
@property (nonatomic) long long currentIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)reloadData;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (id)animatorForDismissedController:(id)a0;
- (id)animatorForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (void)pageViewController:(id)a0 didFinishAnimating:(BOOL)a1 previousViewControllers:(id)a2 transitionCompleted:(BOOL)a3;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (void)pageViewController:(id)a0 willTransitionToViewControllers:(id)a1;
- (void)_doneButtonTapped:(id)a0;
- (void)_contentViewTapped:(id)a0;
- (void)_fadeOutOverlayAfterDelay:(unsigned long long)a0;
- (id)_itemViewControllerForIndex:(long long)a0;
- (void)_restoreStatusBarAppearanceState;
- (void)_saveStatusBarAppearanceState;
- (void)_setOverlayVisible:(BOOL)a0 animated:(BOOL)a1;
- (void)_toggleFadeOverlay;
- (void)_updateCurrentIndex;
- (void)_updateTitleWithIndex:(long long)a0;
- (id)currentItemViewController;
- (void)slideshowItemViewControllerDidBeginPinchGesture:(id)a0;
- (void)slideshowItemViewControllerDidDismissWithPinchGesture:(id)a0 ratio:(double)a1;

@end
