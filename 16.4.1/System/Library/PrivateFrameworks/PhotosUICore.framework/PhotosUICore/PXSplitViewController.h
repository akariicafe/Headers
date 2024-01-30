@class UIViewController, NSHashTable;
@protocol UIFocusEnvironment;

@interface PXSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {
    BOOL _inViewWillTransitionToSize;
    long long _originalPreferredDisplayMode;
    id<UIFocusEnvironment> _preferredFocusEnvironmentForNextRequest;
    NSHashTable *_changeObservers;
}

@property (readonly, nonatomic) UIViewController *sidebarViewController;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) BOOL isSidebarVisible;
@property (nonatomic) BOOL wantsSidebarHidden;

+ (void)initialize;

- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)preferredFocusEnvironments;
- (id)px_diagnosticsItemProvidersForPoint:(struct CGPoint { double x0; double x1; })a0 inCoordinateSpace:(id)a1;
- (void).cxx_destruct;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (long long)splitViewController:(id)a0 displayModeForExpandingToProposedDisplayMode:(long long)a1;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (BOOL)_isDisplayModeAllVisibleAllowed;
- (void)toggleSidebarVisibilityAnimated;
- (void)dismissPrimaryColumnIfOverlay;
- (id)initWithSidebarNavigationController:(id)a0 contentViewController:(id)a1;
- (void)requestFocusUpdateWithPreferredFocusEnvironment:(id)a0;

@end
