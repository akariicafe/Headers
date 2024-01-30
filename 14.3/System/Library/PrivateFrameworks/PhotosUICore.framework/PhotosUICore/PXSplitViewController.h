@class UIViewController, NSHashTable;

@interface PXSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {
    BOOL _inViewWillTransitionToSize;
    long long _originalPreferredDisplayMode;
    NSHashTable *_changeObservers;
}

@property (readonly, nonatomic) UIViewController *sidebarViewController;
@property (readonly, nonatomic) UIViewController *contentViewController;
@property (readonly, nonatomic) BOOL isSidebarVisible;
@property (nonatomic) BOOL wantsSidebarHidden;

+ (void)initialize;

- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (long long)splitViewController:(id)a0 displayModeForExpandingToProposedDisplayMode:(long long)a1;
- (id)keyCommands;
- (id)_deepestUnambiguousResponder;
- (void)toggleSidebarVisibilityAnimated;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dismissPrimaryColumnIfOverlay;
- (void)splitViewController:(id)a0 willChangeToDisplayMode:(long long)a1;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)_isDisplayModeAllVisibleAllowed;
- (id)initWithSidebarNavigationController:(id)a0 contentViewController:(id)a1;
- (id)px_endPointForTransition:(id)a0;

@end
