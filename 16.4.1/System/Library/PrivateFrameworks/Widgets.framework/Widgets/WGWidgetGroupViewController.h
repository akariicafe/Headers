@class UIScrollView, NSString, NSArray, WGCarouselListViewController, UIControl, UIViewController, UILabel, WGWidgetDiscoveryController;
@protocol WGWidgetGroupViewControllerDelegate;

@interface WGWidgetGroupViewController : UIViewController <WGWidgetDebugging, WGWidgetDiscoveryObserving, WGWidgetListViewControllerDelegatePrivate, WGMajorListViewControllerDelegate, WGWidgetExtensionVisibilityProviding, WGWidgetIconAnimationExtraViewsProviding> {
    WGWidgetDiscoveryController *_discoveryController;
    WGCarouselListViewController *_majorColumnListViewController;
    unsigned long long _lastWidgetCount;
    UILabel *_debugLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WGWidgetGroupViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long location;
@property (readonly, nonatomic) UIScrollView *majorScrollView;
@property (readonly, nonatomic) unsigned long long widgetCount;
@property (nonatomic) BOOL shouldBlurContent;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentOccludingInset;
@property (retain, nonatomic) UIViewController *headerContentViewController;
@property (readonly, nonatomic, getter=isHeaderVisible) BOOL headerVisible;
@property (nonatomic) struct WGWidgetListSettings { unsigned long long carouselEdges; BOOL useFavorites; BOOL carouselIgnoresHeader; BOOL pinned; } listSettings;
@property (retain, nonatomic) UIControl *editButton;
@property (nonatomic, getter=isEditingIcons) BOOL editingIcons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *extraViewsContainers;
@property (readonly, copy, nonatomic) NSArray *extraViews;
@property (readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property (readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;

- (id)initWithWidgetDiscoveryController:(id)a0 listSettings:(struct WGWidgetListSettings { unsigned long long x0; BOOL x1; BOOL x2; BOOL x3; })a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (struct CGSize { double x0; double x1; })widgetListViewController:(id)a0 sizeForInterfaceOrientation:(long long)a1;
- (void)_loadWidgetListViewController;
- (void)editViewWillAppear:(id)a0;
- (void)setLegibilitySettings:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)editViewDidAppear:(id)a0;
- (void)majorListViewControllerDidChangeHeaderVisibility:(id)a0;
- (BOOL)_canShowWhileLocked;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })widgetListViewController:(id)a0 contentOccludingInsetsForInterfaceOrientation:(long long)a1;
- (void)scrollViewDidScroll:(id)a0;
- (id)_scrollViewForListViewController:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (BOOL)isWidgetExtensionVisible:(id)a0;
- (long long)_activeLayoutMode;
- (void)viewWillDisappear:(BOOL)a0;
- (void)editViewDidDisappear:(id)a0;
- (void)scrollViewWillBeginDecelerating:(id)a0;
- (void)presentEditViewWithCompletion:(id /* block */)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)editViewWillDisappear:(id)a0;
- (void)makeVisibleWidgetWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (long long)_layoutModeForSize:(struct CGSize { double x0; double x1; })a0;
- (void)viewWillAppear:(BOOL)a0;

@end
