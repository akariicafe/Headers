@class UIView, PKSpringAnimationFactory, NSMutableArray;

@interface PKPGSVTransitionInterstitialView : UIView {
    BOOL _animated;
    unsigned long long _animationCounter;
    NSMutableArray *_completions;
    BOOL _presentingItemDirty;
    BOOL _presentedItemDirty;
    UIView *_presentingItemSnapshot;
    UIView *_presentedItemSnapshot;
}

@property (retain, nonatomic) PKSpringAnimationFactory *springFactory;
@property (readonly, nonatomic, getter=isPresented) BOOL presented;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;

- (id)init;
- (void)addCompletion:(id /* block */)a0;
- (void)layoutIfNeededAnimated:(BOOL)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_animationForKeyPath:(id)a0;
- (void)_executeCompletionHandlers:(BOOL)a0;
- (void)_incrementAnimationCount;
- (void)_decrementAnimationCount;
- (id)_snapshotForView:(id)a0;
- (void)_updateFrameForTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1 track:(BOOL)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithPresented:(BOOL)a0;
- (void)beginTrackingExternalAnimation;
- (void)endTrackingExternalAnimation;
- (void)addPresentingItem:(id)a0;
- (void)addPresentedItem:(id)a0;
- (void)updateFrameForTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 animated:(BOOL)a1;
- (void)setPresented:(BOOL)a0 withTargetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 completion:(id /* block */)a2;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidate;

@end
