@class _UIFindNavigatorViewController, NSString, UIScrollView, UIView;

@interface _UIFindNavigatorHarness : NSObject <_UIGeometryChangeObserver, _UIFindNavigatorViewControllerDelegate, _UIFindNavigatorHosting> {
    BOOL _isHoistingFindNavigator;
    BOOL _interactionViewIsWebView;
}

@property (retain, nonatomic) _UIFindNavigatorViewController *findNavigatorViewController;
@property (weak, nonatomic) UIView *interactionView;
@property (weak, nonatomic) UIView *hostView;
@property (weak, nonatomic) UIScrollView *hostScrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;

- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; id x6; id x7; id x8; } *)a0 forAncestor:(id)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_adjustHostViewScrollOffsetToTopIfSupported;
- (id)_findNavigatorView;
- (void)_layoutFindNavigator;
- (void)_sendPlacementUpdate;
- (BOOL)_shouldAdjustHostViewContentOffsets;
- (void)beginHoistingFindNavigator:(BOOL)a0;
- (void)dismissFindNavigatorEndingActiveSession:(BOOL)a0;
- (void)endHoistingFindNavigator:(BOOL)a0;
- (void)endHoistingFindNavigator:(BOOL)a0 endingActiveSession:(BOOL)a1;
- (BOOL)findNavigatorShouldDismissOnResponderChange:(id)a0;
- (void)findNavigatorViewControllerDidRequestDismissal:(id)a0;
- (void)findNavigatorViewControllerViewDidChangeIntrinsicContentSize:(id)a0;
- (void)presentFindNavigatorWithFindSession:(id)a0 showingReplace:(BOOL)a1;

@end
