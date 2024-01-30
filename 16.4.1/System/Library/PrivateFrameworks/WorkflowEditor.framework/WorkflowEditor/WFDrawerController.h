@class NSArray, NSMapTable, WFDrawerPaneContainer, NSString, UIViewController;
@protocol WFDrawerControllerDelegate;

@interface WFDrawerController : UIViewController <WFDrawerPaneContainerDelegate>

@property (readonly, nonatomic) NSArray *paneContainers;
@property (readonly, nonatomic) WFDrawerPaneContainer *topPaneContainer;
@property (readonly, nonatomic) NSMapTable *paneContainersByViewControllers;
@property (readonly, nonatomic) UIViewController *initializationViewController;
@property (readonly, nonatomic) NSString *drawerGroup;
@property (readonly, nonatomic) unsigned long long previousVisibilityOfCoveredPaneContainer;
@property (readonly, nonatomic) BOOL inTransition;
@property (weak, nonatomic) id<WFDrawerControllerDelegate> delegate;
@property (readonly, nonatomic) NSArray *viewControllers;
@property (readonly, nonatomic) UIViewController *topViewController;
@property (readonly, nonatomic) unsigned long long visibility;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) double topInset;
@property (nonatomic) double bottomInset;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } drawerRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (id)initWithRootViewController:(id)a0;
- (id)init;
- (BOOL)popViewControllerAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (double)heightForVisibility:(unsigned long long)a0;
- (BOOL)pushViewController:(id)a0 withVisibility:(unsigned long long)a1 dimming:(unsigned long long)a2 animated:(BOOL)a3;
- (void)transitionToVisibility:(unsigned long long)a0 withDimming:(unsigned long long)a1 animated:(BOOL)a2;
- (void)transitionToVisibility:(unsigned long long)a0 withDimming:(unsigned long long)a1 animated:(BOOL)a2 completion:(id /* block */)a3;
- (id)paneContainerForViewController:(id)a0;
- (double)bottomInsetForPaneContainer:(id)a0;
- (id)coveredPaneContainer;
- (void)drawerPaneContainer:(id)a0 didTransitionToVisibility:(unsigned long long)a1;
- (void)drawerPaneContainer:(id)a0 willTransitionToVisibility:(unsigned long long)a1;
- (id)drawerPaneWithViewController:(id)a0;
- (id)mutablePaneControllers;
- (BOOL)popViewControllerToVisibility:(unsigned long long)a0 dimming:(unsigned long long)a1 animated:(BOOL)a2;
- (id)scrollViewOccludingDrawerPaneInsideContainer:(id)a0;
- (double)topInsetForPaneContainer:(id)a0;

@end
