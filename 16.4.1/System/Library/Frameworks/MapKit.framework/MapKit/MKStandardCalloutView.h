@class UIMotionEffectGroup, _MKCalloutLayer, _MKStandardCalloutMaskView, UIVisualEffectView, UIView, MKSmallCalloutView;

@interface MKStandardCalloutView : MKCalloutView {
    struct { struct CGPoint { double x; double y; } origin; struct CGPoint { double x; double y; } offset; long long position; struct CGPoint { double x; double y; } desiredPoint; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desiredBounds; } _anchor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _frame;
    struct { unsigned char animated : 1; unsigned char didMoveCalled : 1; unsigned char hasPendingAnimatedLayout : 1; unsigned char needsCalloutUpdate : 1; unsigned char isObserving : 1; unsigned int reserved : 26; } _flags;
    BOOL _animatingMapToShow;
    BOOL _dismissed;
    _MKStandardCalloutMaskView *_maskView;
    _MKCalloutLayer *_maskLayer;
    _MKCalloutLayer *_contentStrokeLayer;
    UIView *_contentView;
    MKSmallCalloutView *_calloutView;
    UIVisualEffectView *_backdropView;
    UIMotionEffectGroup *_motionEffect;
    long long _style;
    struct { double margin; double cornerRadius; double arrowBase; double arrowHeight; BOOL useRadialSmoothing; union { struct { double arrowBaseRadius; double arrowRadius; } radialSmoothing; struct { double arrowSmoothing; double arrowPointFactor; } nonRadialSmoothing; } ; BOOL alignDetailViewBaseline; BOOL scaleVerticalPaddingForDynamicType; struct UIEdgeInsets { double top; double left; double bottom; double right; } padding; } _metrics;
}

@property (nonatomic) BOOL hideTitle;

+ (double)defaultHeight;
+ (Class)layerClass;

- (void)setOffset:(struct CGPoint { double x0; double x1; })a0;
- (long long)anchorPosition;
- (void)didMoveToWindow;
- (id)subtitle;
- (struct CGPoint { double x0; double x1; })offset;
- (void)dealloc;
- (struct CGPoint { double x0; double x1; })anchorPoint;
- (void)_layoutSubviews:(BOOL)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)updateConstraints;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSubtitle:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)animationDidStop:(id)a0 finished:(id)a1 context:(void *)a2;
- (void)_calloutAccessoryControlTapped:(id)a0;
- (void)_frameDidChange;
- (void)_adaptToUserInterfaceStyle;
- (void)_addAccessoryTargetForView:(id)a0;
- (void)_calculateActualAnchorPoint:(struct CGPoint { double x0; double x1; } *)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 forDesiredAnchorPoint:(struct CGPoint { double x0; double x1; })a2 boundaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (long long)_calculateAnchorPosition:(struct CGPoint { double x0; double x1; } *)a0 visibleRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)_markDidMoveCalled;
- (struct CGPoint { double x0; double x1; })_originForScale:(double)a0;
- (void)_removeAccessoryTargetForView:(id)a0;
- (void)_runBounceAnimationWithCompletionBlock:(id /* block */)a0;
- (void)_setNeedsCalloutUpdate;
- (void)_setOriginForScale:(double)a0;
- (void)_showFromAnchorPoint:(struct CGPoint { double x0; double x1; })a0 boundaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 animate:(BOOL)a2 completionBlock:(id /* block */)a3;
- (void)_startObservingAnnotationView:(id)a0;
- (void)_stopObservingAnnotationView:(id)a0;
- (void)_updateCallout;
- (void)_updateCalloutAnimated:(BOOL)a0;
- (void)annotationViewFrameDidChange;
- (void)completeBounceAnimation;
- (void)dismissAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;
- (void)forceAnchorPosition:(long long)a0;
- (BOOL)hasPendingVisibility;
- (id)initWithAnnotationView:(id)a0;
- (BOOL)isLeftAnchored;
- (void)motionEffectDidUpdate:(id)a0;
- (void)setDetailView:(id)a0 animated:(BOOL)a1;
- (void)setLeftView:(id)a0 backgroundColor:(id)a1 animated:(BOOL)a2;
- (void)setRightView:(id)a0 animated:(BOOL)a1;
- (void)setSubtitle:(id)a0 animated:(BOOL)a1;
- (void)showAnimated:(BOOL)a0 completionBlock:(id /* block */)a1;

@end
