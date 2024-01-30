@class UIWindow, UIResponder, NSMutableArray, UIView;

@interface UITransitionView : UIView <NSCoding> {
    UIView *_fromView;
    UIView *_toView;
    NSMutableArray *_frozenSubviews;
    UIResponder *_firstResponderToRemember;
    id _delegate;
    UIWindow *_originalWindow;
    struct { unsigned char animationInProgress : 1; unsigned char ignoresInteractionEvents : 1; unsigned char shouldNotifyDidCompleteImmediately : 1; unsigned char useViewControllerAppearanceCallbacks : 1; unsigned char shouldRestoreFromViewAlpha : 1; unsigned char shouldRestoreGroupOpacity : 1; unsigned char groupOpacityToRestoreForFromView : 1; unsigned char groupOpacityToRestoreForToView : 1; unsigned char shouldRasterize : 1; unsigned char enableRotationAfterTransition : 1; unsigned char removeFromView : 1; } _transitionViewFlags;
    double _curlUpRevealedHeight;
}

@property (readonly, nonatomic) double _curlUpRevealedHeight;
@property (nonatomic) BOOL shouldNotifyDidCompleteImmediately;
@property (nonatomic) long long animationTimingCurve;
@property (nonatomic) BOOL ignoreDirectTouchEvents;

+ (double)defaultDurationForTransition:(int)a0;

- (BOOL)rasterizesOnTransition;
- (id)toView;
- (void)_didCompleteTransition:(BOOL)a0;
- (void)notifyDidCompleteTransition:(id)a0;
- (BOOL)_shouldDisableGroupOpacityOnAlphaTransitions;
- (double)durationForTransition:(int)a0;
- (void)safeAreaInsetsDidChange;
- (BOOL)transition:(int)a0 fromView:(id)a1 toView:(id)a2 removeFromView:(BOOL)a3;
- (BOOL)transition:(int)a0 toView:(id)a1;
- (void)_transitionDidStopFinished:(BOOL)a0;
- (BOOL)_isTransitioningFromFromView:(id)a0;
- (BOOL)transition:(int)a0 fromView:(id)a1 toView:(id)a2;
- (int)textEffectsVisibilityLevel;
- (id)fromView;
- (BOOL)ignoresInteractionEvents;
- (void)setRasterizesOnTransition:(BOOL)a0;
- (void)setIgnoresInteractionEvents:(BOOL)a0;
- (void)_didStartTransition;
- (void)_startTransition:(int)a0 withDuration:(double)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)layoutSubviews;
- (BOOL)isTransitioning;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setDelegate:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)delegate;
- (void)encodeWithCoder:(id)a0;

@end
