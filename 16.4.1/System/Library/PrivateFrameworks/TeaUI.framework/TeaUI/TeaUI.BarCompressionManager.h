@interface TeaUI.BarCompressionManager : NSObject <UIScrollViewDelegate, TUDynamicBarAnimatorDelegate, UITableViewDelegate, UICollectionViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isEnabled;
    void /* unknown type, empty encoding */ shouldExpandAtBottom;
    void /* unknown type, empty encoding */ $__lazy_storage_$_state;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ proxyMultiDelegate;
    void /* unknown type, empty encoding */ barAnimator;
    void /* unknown type, empty encoding */ navigationBarAnimation;
    void /* unknown type, empty encoding */ toolbarAnimation;
    void /* unknown type, empty encoding */ barState;
    void /* unknown type, empty encoding */ sceneStateManager;
    void /* unknown type, empty encoding */ observingToken;
    void /* unknown type, empty encoding */ lastContentOffset;
    void /* unknown type, empty encoding */ initialContentOffset;
    void /* unknown type, empty encoding */ scrollDebounce;
    void /* unknown type, empty encoding */ _lastBarCompressEvent;
}

- (BOOL)scrollViewShouldScrollToTop:(id)a0;
- (void)dynamicBarAnimatorWillEnterSteadyState:(id)a0;
- (void)dynamicBarAnimatorOutputsDidChange:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (void)dynamicBarAnimatorWillLeaveSteadyState:(id)a0;
- (void)scrollViewDidScrollToTop:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)dynamicBarAnimator:(id)a0 canHideBarsByDraggingWithOffset:(double)a1;
- (id)init;
- (void).cxx_destruct;
- (void)voiceOverStatusDidChange;

@end
