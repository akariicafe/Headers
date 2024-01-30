@class NSString;
@protocol CCUIOverlayMetricsProvider, CCUIOverlayViewProvider, CCUIOverlayFlickGestureBehavior;

@interface CCUIOverlaySlideUpPresentationProvider : NSObject <CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider>

@property (readonly, nonatomic) double dismissalFlickMaximumTime;
@property (readonly, nonatomic) double dismissalFlickMinimumVelocity;
@property (readonly, nonatomic) unsigned long long dismissalFlickAllowedDirections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isPanDismissalAvailable) BOOL panDismissalAvailable;
@property (readonly, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property (readonly, nonatomic) BOOL allowHotPocketDuringTransition;
@property (weak, nonatomic) id<CCUIOverlayViewProvider> viewProvider;
@property (weak, nonatomic) id<CCUIOverlayMetricsProvider> metricsProvider;
@property (readonly, nonatomic) unsigned long long headerMode;
@property (readonly, copy, nonatomic) id<CCUIOverlayFlickGestureBehavior> flickGestureBehavior;

+ (id)_moduleC2AnimationParametersForTransitionState:(id)a0 layoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x0; unsigned long long x1; } x0; struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; } x1; })a1;
+ (id)_baseC2AnimationParametersForTransitionState:(id)a0;

- (void)layoutViews;
- (double)_pullUpTranslation;
- (BOOL)backdropViewShouldUseAlphaTransformer;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)a0 transitionState:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_moduleViewTransformForTransitionState:(id)a0 layoutRect:(struct CCUILayoutRect { struct CCUILayoutPoint { unsigned long long x0; unsigned long long x1; } x0; struct CCUILayoutSize { unsigned long long x0; unsigned long long x1; } x1; })a1;
- (void)_addHeaderContentTranslationAnimationToBatch:(id)a0 transitionState:(id)a1;
- (id)transitionStateForType:(unsigned long long)a0 interactive:(BOOL)a1 translation:(struct CGPoint { double x0; double x1; })a2;
- (void)_addHeaderSensorStatusViewAlphaAnimationToBatch:(id)a0 transitionState:(id)a1;
- (double)_additionalHeaderHeight;
- (BOOL)allowHotPocketDuringTransition;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_headerViewTransformForTransitionState:(id)a0;
- (id)animationBatchForTransitionState:(id)a0 previousTransitionState:(id)a1;
- (double)_effectiveHeaderViewHeight;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_transformForTransitionState:(id)a0 rubberBandingHeight:(double)a1;
- (void).cxx_destruct;
- (BOOL)tapAllowsDismissalForLocation:(struct CGPoint { double x0; double x1; })a0;
- (void)_addModuleTransformAnimationsToBatch:(id)a0 transitionState:(id)a1;
- (unsigned long long)finalTransitionTypeForState:(id)a0 gestureTranslation:(struct CGPoint { double x0; double x1; })a1 gestureVelocity:(struct CGPoint { double x0; double x1; })a2;
- (void)_addHeaderChevronAlphaAnimationToBatch:(id)a0 transitionState:(id)a1;
- (void)_addHeaderStatusBarAlphaAnimationToBatch:(id)a0 transitionState:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_headerViewFrameForContentSize:(struct CGSize { double x0; double x1; })a0 withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentInset:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 contentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a3 orientation:(long long)a4;
- (void)_addHeaderContentTransformAnimationToBatch:(id)a0 transitionState:(id)a1;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_moduleViewScaleTransformForTransitionState:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_edgeInsetsForContentSize:(struct CGSize { double x0; double x1; })a0 withinBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 contentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 orientation:(long long)a3;
- (void)_addScrollViewContentOffsetAnimationToBatch:(id)a0 transitionState:(id)a1;

@end
