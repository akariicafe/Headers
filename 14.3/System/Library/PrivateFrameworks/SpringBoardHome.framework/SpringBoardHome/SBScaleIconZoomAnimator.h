@class UIView, SBHScaleZoomSettings, SBIcon, SBIconView, NSMutableArray, SBReversibleLayerPropertyAnimator;
@protocol SBScaleIconZoomAnimationContaining;

@interface SBScaleIconZoomAnimator : SBIconZoomAnimator {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _iconScootch;
    double _naturalVisualAltitude;
    UIView *_scalingView;
    SBIconView *_targetIconView;
}

@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *homeScreenScaleAnimator;
@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleXAnimator;
@property (retain, nonatomic) SBReversibleLayerPropertyAnimator *targetIconScaleYAnimator;
@property (retain, nonatomic) NSMutableArray *animationCompletions;
@property (readonly, nonatomic) id<SBScaleIconZoomAnimationContaining> animationContainer;
@property (readonly, nonatomic) SBIcon *targetIcon;
@property (readonly, nonatomic) SBIconView *referenceIconView;
@property (readonly, nonatomic) SBIconView *targetIconView;
@property (readonly, nonatomic) UIView *targetIconContainerView;
@property (readonly, nonatomic) UIView *defaultTargetIconContainerView;
@property (readonly, nonatomic) UIView *targetIconPositioningView;
@property (readonly, nonatomic) double zoomScale;
@property (readonly, nonatomic) double maxHomeScreenZoomScale;
@property (readonly, nonatomic) BOOL fadesHomeScreen;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } zoomScaleDimension;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } zoomedTargetIconCenter;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } targetIconCenter;
@property (retain, nonatomic) SBHScaleZoomSettings *settings;

+ (BOOL)validateAnimationContainer:(id)a0 targetIcon:(id)a1;

- (void)_prepareAnimation;
- (double)_homeScreenScaleForZoomFraction:(double)a0;
- (BOOL)shouldMatchMoveWithDock;
- (void)_cleanupAnimation;
- (void).cxx_destruct;
- (void)_setZoomScale:(struct CGPoint { double x0; double x1; })a0;
- (void)_configureTargetIconPositioningView:(id)a0;
- (void)_applyVisualAltitudeFraction:(double)a0;
- (id)initWithAnimationContainer:(id)a0 targetIcon:(id)a1;
- (double)_zoomedVisualAltitude;
- (void)_setIconAlpha:(double)a0;
- (void)_setAnimationFraction:(double)a0;
- (BOOL)_forceSquareZoomDimension;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedFrame;
- (struct CGPoint { double x0; double x1; })_zoomedIconCenter;
- (void)hintToFraction:(double)a0;
- (void)_applyIconGridFadeFraction:(double)a0;
- (void)_applyZoomFraction:(double)a0;
- (struct CGPoint { double x0; double x1; })_referenceIconImageCenter;
- (struct CGPoint { double x0; double x1; })_targetIconScaleForZoomFraction:(double)a0;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (unsigned long long)_numberOfSignificantAnimations;

@end
