@class UIKBBackdropView, _UIVisualEffectBackdropView;

@interface UIKBInputBackdropView : UIView {
    unsigned long long _innerCorners;
    BOOL _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    BOOL _hasStartRect;
    BOOL _hasEndRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _savedStartRect;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _savedEndRect;
}

@property (retain, nonatomic) UIKBBackdropView *inputBackdropFullView;
@property (retain, nonatomic) UIKBBackdropView *inputBackdropLeftView;
@property (retain, nonatomic) UIKBBackdropView *inputBackdropRightView;
@property (retain, nonatomic) _UIVisualEffectBackdropView *captureView;
@property (readonly) long long style;

+ (BOOL)requiresConstraintBasedLayout;

- (int)textEffectsVisibilityLevel;
- (void)prepareForSnapshotting;
- (void)transitionToStyle:(long long)a0 isSplit:(BOOL)a1;
- (void)_endSplitTransitionIfNeeded:(BOOL)a0;
- (void)_setInitialProgressWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftOffset:(double)a1 gapWidth:(double)a2 progress:(double)a3 innerCorners:(unsigned long long)a4;
- (BOOL)_isTransitioning;
- (void)_setRenderConfig:(id)a0;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)restoreFromSnapshotting;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 andRightViewRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 innerCorners:(unsigned long long)a2;
- (void)_beginSplitTransitionIfNeeded:(double)a0 gapWidth:(double)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 leftOffset:(double)a1 gapWidth:(double)a2 progress:(double)a3;
- (void)_setProgress:(double)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end
