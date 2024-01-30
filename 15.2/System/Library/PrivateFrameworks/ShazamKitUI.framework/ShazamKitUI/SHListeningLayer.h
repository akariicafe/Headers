@class SHTaggingViewOuterCirclesLayer, SHTaggingViewAutoShadowLayer, SHInnerCircleMaskLayer, CALayer, SHTaggingViewInnerCirclesLayer, SHShazamButtonLayer;
@protocol SHListeningLayerDelegate;

@interface SHListeningLayer : CALayer <SHShazamButtonViewDelegate>

@property (weak, nonatomic) id<SHListeningLayerDelegate> viewDelegate;
@property (nonatomic) long long state;
@property (retain, nonatomic) SHShazamButtonLayer *shazamButtonLayer;
@property (retain, nonatomic) CALayer *autoShadowContainerLayer;
@property (retain, nonatomic) CALayer *innerCirclesContainerLayer;
@property (retain, nonatomic) CALayer *innerCirclesSecondaryContainerLayer;
@property (retain, nonatomic) SHTaggingViewInnerCirclesLayer *innerCirclesLayer;
@property (retain, nonatomic) SHTaggingViewOuterCirclesLayer *outerCirclesLayer;
@property (retain, nonatomic) SHTaggingViewAutoShadowLayer *autoShadowLayer;
@property (retain, nonatomic) SHInnerCircleMaskLayer *innerCircleToShazamButtonMaskLayer;
@property (retain, nonatomic) SHInnerCircleMaskLayer *innerCircleToAutoShadowMaskLayer;
@property (retain, nonatomic) SHInnerCircleMaskLayer *autoShadowToShazamButtonMaskLayer;

- (void)layoutSublayers;
- (void).cxx_destruct;
- (id)init;
- (void)startActiveListeningAnimation;
- (void)buildView;
- (void)buttonWillFinishDrawingShazamShape;
- (void)buttonDidFinishDrawingShazamShape;
- (void)centerLayer:(id)a0 inSuperLayer:(id)a1 withRelativeSize:(double)a2;
- (void)startManualTaggingAnimation;
- (void)startAutoTaggingAnimation;
- (void)removeAnimationLayers;
- (void)startIdleAnimation;
- (void)animateToIdleStateWithCompletion:(id /* block */)a0;
- (void)processBassForInnerCircle:(double)a0;
- (void)processBassForShazamButton:(double)a0;
- (void)processTrebleForOuterCircles:(double)a0;
- (void)addInnerCirclesLayer;
- (void)addOuterCirclesLayer;
- (void)addInnerCirclesToShazamButtonMaskLayer;
- (void)addAutoShadowLayer;
- (void)addInnerCircleToAutoShadowMaskLayer;
- (void)addAutoShadowToShazamButtonMaskLayer;
- (void)addAutoAnimationInitialShazamButtonPulse;
- (void)startPassiveListeningAnimation;
- (void)stopListeningAnimations;
- (void)processBass:(double)a0 treble:(double)a1;
- (void)addTouchDownAnimation;

@end
