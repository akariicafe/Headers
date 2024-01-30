@class NSArray, UIImage, NSMutableArray, UIBarButtonItem;
@protocol UIMultiColumnViewControllerDelegate;

@interface UIMultiColumnViewController : UIViewController {
    unsigned long long _lastColumnCount;
    unsigned long long _animatingTargetColumnCount;
    UIBarButtonItem *_showSecondColumnBarButtonItem;
    UIBarButtonItem *_hideSecondColumnBarButtonItem;
    struct { unsigned char updatingNavControllerChildren : 1; unsigned char animatingItem1LeftBarButton : 1; unsigned char lastColumnCountIsValid : 1; unsigned char animatingSplitToWidth : 1; } _mcvcFlags;
    NSMutableArray *_borderViews;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastFrameInWindow;
    struct CGSize { double width; double height; } _containerSizeAtLastUpdate;
    NSArray *_possibleStatesAtLastUpdate;
}

@property (retain, nonatomic) NSArray *viewControllers;
@property (retain, nonatomic) NSArray *navControllers;
@property (retain, nonatomic) NSArray *columnWidths;
@property (nonatomic) double keyboardInset;
@property (retain, nonatomic, setter=_setColumnToggleButtonImage:) UIImage *_columnToggleButtonImage;
@property (weak, nonatomic) id<UIMultiColumnViewControllerDelegate> delegate;
@property (readonly, nonatomic) unsigned long long columnCount;

- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)showViewController:(id)a0 sender:(id)a1;
- (void)_marginInfoForChild:(id)a0 leftMargin:(double *)a1 rightMargin:(double *)a2;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForChildViewController:(id)a0 insetsAreAbsolute:(BOOL *)a1;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)a0;
- (id)title;
- (id)description;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_navigationBarForDragAffordance;
- (id)_addSecondColumnBarButton:(long long)a0 toNavItem:(id)a1;
- (void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)a0;
- (BOOL)_allowMultipleColumnsForPossibleStates:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)_canShowColumnIndex:(unsigned long long)a0;
- (void)_collapseSecondaryViewController:(id)a0 forSplitViewController:(id)a1 withTransitionCoordinator:(id)a2;
- (unsigned long long)_columnCountForPossibleStates:(id)a0 containerSize:(struct CGSize { double x0; double x1; })a1;
- (id)_contentSizesForColumnWidths:(id)a0;
- (id)_effectiveColumnWidths;
- (void)_hideSecondColumn:(id)a0;
- (id)_liveVCs;
- (void)_moveViewControllersForColumnCount:(unsigned long long)a0;
- (void)_navigationControllerChangedViewControllers:(id)a0;
- (id)_possibleContentSizes;
- (id)_preferredContentSizes;
- (id)_removeSecondColumnBarButton:(long long)a0 fromNavItem:(id)a1;
- (id)_secondColumnBarButtonItem:(long long)a0 createIfNecessary:(BOOL)a1;
- (void)_setAllowNestedNavigationControllers:(BOOL)a0;
- (void)_showSecondColumn:(id)a0;
- (id)_sideBarImage;
- (void)_splitViewControllerDidUpdate:(id)a0 withSize:(struct CGSize { double x0; double x1; })a1;
- (id)_splitViewControllerImageForDisplayModeButtonToShowPrimary:(id)a0;
- (void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)a0;
- (double)_unsafeAreaPaddingForFirstVisibleColumn;
- (void)_updateButtonsForColumnCount:(unsigned long long)a0 animatingChange:(BOOL)a1;
- (void)_willShowColumnCount:(unsigned long long)a0;
- (id)initWithNavController:(id)a0 viewControllers:(id)a1;
- (id)initWithNavController:(id)a0 viewControllers:(id)a1 columnWidths:(id)a2;
- (void)requestColumnCount:(unsigned long long)a0 animated:(BOOL)a1;
- (id)separateSecondaryViewControllerForSplitViewController:(id)a0;
- (BOOL)sizeMightAllowMultipleColumns:(struct CGSize { double x0; double x1; })a0;

@end
