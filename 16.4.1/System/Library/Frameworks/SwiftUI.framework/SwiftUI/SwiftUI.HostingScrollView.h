@interface SwiftUI.HostingScrollView : UIKitScrollViewBase <UIScrollViewDelegate, _UIUpdateCycleIdleObserver> {
    void /* unknown type, empty encoding */ viewType;
    void /* unknown type, empty encoding */ layoutState;
    void /* unknown type, empty encoding */ eventState;
    void /* unknown type, empty encoding */ prefetchState;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ responder;
    void /* unknown type, empty encoding */ layoutDirection;
    void /* unknown type, empty encoding */ ignoreUpdates;
    void /* unknown type, empty encoding */ pendingUpdate;
    void /* unknown type, empty encoding */ lastContentInset;
    void /* unknown type, empty encoding */ uiLastSafeAreaInset;
    void /* unknown type, empty encoding */ lastAdditionalInset;
    void /* unknown type, empty encoding */ animationTarget;
    void /* unknown type, empty encoding */ animationOffset;
    void /* unknown type, empty encoding */ isAnimationCompletionCheckPending;
    void /* unknown type, empty encoding */ safeAreaTransitionState;
    void /* unknown type, empty encoding */ beginDraggingOffset;
    void /* unknown type, empty encoding */ onScrollToTopGesture;
    void /* unknown type, empty encoding */ configuration;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (nonatomic, readonly) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } safeAreaInsets;
@property (nonatomic, readonly) BOOL _shouldScrollToContentBeginningInRightToLeft;

- (void)scrollViewDidEndDecelerating:(id)a0;
- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)safeAreaInsetsDidChange;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0 animated:(BOOL)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)_swiftui_focusedItem:(id)a0 isMinX:(BOOL *)a1 isMaxX:(BOOL *)a2 isMinY:(BOOL *)a3 isMaxY:(BOOL *)a4;
- (void)_updateCycleIdleUntil:(unsigned long long)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)adjustedContentInsetDidChange;

@end
