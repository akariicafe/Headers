@class SHListeningOuterCirclesLayer, SHListeningAutoShadowLayer, SHInnerCircleMaskLayer, SHPalette, CALayer, SHListeningInnerCirclesLayer, SHShazamButtonLayer;
@protocol SHListeningLayerDelegate;

@interface SHListeningLayer : CALayer <SHShazamButtonViewDelegate>

@property (weak, nonatomic) id<SHListeningLayerDelegate> viewDelegate;
@property (nonatomic) long long state;
@property (retain, nonatomic) SHShazamButtonLayer *shazamButtonLayer;
@property (retain, nonatomic) CALayer *autoShadowContainerLayer;
@property (retain, nonatomic) CALayer *innerCirclesContainerLayer;
@property (retain, nonatomic) CALayer *innerCirclesSecondaryContainerLayer;
@property (retain, nonatomic) SHListeningInnerCirclesLayer *innerCirclesLayer;
@property (retain, nonatomic) SHListeningOuterCirclesLayer *outerCirclesLayer;
@property (retain, nonatomic) SHListeningAutoShadowLayer *autoShadowLayer;
@property (retain, nonatomic) SHInnerCircleMaskLayer *innerCircleToShazamButtonMaskLayer;
@property (retain, nonatomic) SHInnerCircleMaskLayer *innerCircleToAutoShadowMaskLayer;
@property (retain, nonatomic) SHInnerCircleMaskLayer *autoShadowToShazamButtonMaskLayer;
@property (readonly, nonatomic) SHPalette *palette;
@property (nonatomic) BOOL shouldPerformIntroAnimation;
@property (nonatomic) double bass;
@property (nonatomic) double treble;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSublayers;
- (void)buildView;
- (void)stopAllAnimations;
- (void)startActiveListeningAnimation;
- (void)addAutoAnimationInitialShazamButtonPulse;
- (void)addAutoShadowLayer;
- (void)addAutoShadowToShazamButtonMaskLayer;
- (void)addInnerCircleToAutoShadowMaskLayer;
- (void)addInnerCirclesLayer;
- (void)addInnerCirclesToShazamButtonMaskLayer;
- (void)addOuterCirclesLayer;
- (void)addTouchDownAnimation;
- (void)animateToIdleStateWithCompletion:(id /* block */)a0;
- (void)buttonDidFinishDrawingShazamShape;
- (void)buttonWillFinishDrawingShazamShape;
- (void)centerLayer:(id)a0 inSuperLayer:(id)a1 withRelativeSize:(double)a2;
- (id)initWithIntroAnimation:(BOOL)a0 useCustomCompatibleBackground:(BOOL)a1;
- (void)processBass:(double)a0 treble:(double)a1;
- (void)processBassForInnerCircle:(double)a0;
- (void)processBassForShazamButton:(double)a0;
- (void)processTrebleForOuterCircles:(double)a0;
- (void)removeAnimationLayers;
- (void)startIdleAnimation;
- (void)startPassiveListeningAnimation;
- (void)stopAllAnimationsWithCompletionHandler:(id /* block */)a0;
- (void)stopListeningAnimations;

@end
