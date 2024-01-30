@class NSString;
@protocol CCUIOverlayMetricsProvider, CCUIOverlayViewProvider, CCUIOverlayFlickGestureBehavior;

@interface CCUIOverlayScaleFadePresentationProvider : NSObject <CCUIOverlayPresentationProvider>

@property (readonly, nonatomic, getter=isPanDismissalAvailable) BOOL panDismissalAvailable;
@property (readonly, nonatomic, getter=isZoomEnabled) BOOL zoomEnabled;
@property (readonly, nonatomic) BOOL allowHotPocketDuringTransition;
@property (weak, nonatomic) id<CCUIOverlayViewProvider> viewProvider;
@property (weak, nonatomic) id<CCUIOverlayMetricsProvider> metricsProvider;
@property (readonly, nonatomic) unsigned long long headerMode;
@property (readonly, copy, nonatomic) id<CCUIOverlayFlickGestureBehavior> flickGestureBehavior;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_baseC2AnimationParametersForTransitionState:(id)a0;

- (BOOL)backdropViewShouldUseAlphaTransformer;
- (void).cxx_destruct;
- (void)_addBackgroundViewWeightingAnimationToBatch:(id)a0 transitionState:(id)a1;
- (BOOL)allowHotPocketDuringTransition;
- (void)layoutViews;
- (id)transitionStateForType:(unsigned long long)a0 interactive:(BOOL)a1 translation:(struct CGPoint { double x0; double x1; })a2;
- (id)animationBatchForTransitionState:(id)a0 previousTransitionState:(id)a1;
- (unsigned long long)finalTransitionTypeForState:(id)a0 gestureTranslation:(struct CGPoint { double x0; double x1; })a1 gestureVelocity:(struct CGPoint { double x0; double x1; })a2;
- (BOOL)tapAllowsDismissalForLocation:(struct CGPoint { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_presentedViewFrame;
- (id /* block */)customBackdropScaleAdjustment;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_statusLabelViewFrame;
- (void)_addContainerTransformAnimationToBatch:(id)a0 transitionState:(id)a1;
- (void)_addContainerAlphaAnimationToBatch:(id)a0 transitionState:(id)a1;

@end
