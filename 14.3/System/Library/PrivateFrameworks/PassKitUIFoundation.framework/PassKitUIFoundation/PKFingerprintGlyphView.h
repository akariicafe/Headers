@class UIColor, NSString, NSArray, CALayer, NSMutableArray;
@protocol PKFingerprintGlyphViewDelegate;

@interface PKFingerprintGlyphView : UIView <PKMicaResizableView> {
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_backgroundShapeLayers;
    NSArray *_foregroundShapeLayers;
    NSArray *_foregroundRingShapeLayers;
    CALayer *_maskLayer;
    CALayer *_maskForegroundLayer;
    unsigned long long _transitionIndex;
    BOOL _transitioning;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    BOOL _rotatingRing;
    NSString *_rotationAnimationKey;
}

@property (copy, nonatomic) UIColor *primaryColor;
@property (copy, nonatomic) UIColor *secondaryColor;
@property (nonatomic) BOOL fadeOnRecognized;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) CALayer *contentLayer;
@property (weak, nonatomic) id<PKFingerprintGlyphViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setState:(long long)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)setPrimaryColor:(id)a0 animated:(BOOL)a1;
- (void)_dynamicUserInterfaceTraitDidChange;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (double)pointScaleToMatchBoundsSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })boundsSizeToMatchPointScale:(double)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_executeTransitionCompletionHandlers:(BOOL)a0;
- (void)setPathState:(id)a0 forLayer:(id)a1;
- (void)setProgress:(double)a0 withDuration:(double)a1;
- (void)setContentLayerOpacity:(double)a0 withDuration:(double)a1;
- (void)_applyPrimaryColorAnimated:(BOOL)a0;
- (void)_applySecondaryColorAnimated:(BOOL)a0;
- (void)_restartRotationIfNecessary;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)a0;
- (void)_showFingerprintWithTransitionIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)a0;
- (void)_setRingState:(unsigned long long)a0 withTransitionIndex:(unsigned long long)a1 animated:(BOOL)a2;
- (void)_finishTransitionForIndex:(unsigned long long)a0;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned long long)a0;
- (void)_updateRotationAnimationsIfNecessary;
- (void)_continueHoldingStateForPathAtIndex:(unsigned long long)a0 withTransitionIndex:(unsigned long long)a1;
- (id)pathStateForLayer:(id)a0;
- (void)_setProgress:(double)a0 withDuration:(double)a1 forShapeLayerAtIndex:(unsigned long long)a2;
- (void)_startRotationAnimation;
- (void)_endRotationAnimation;
- (void)_applyColor:(id)a0 toShapeLayers:(id)a1 animated:(BOOL)a2;
- (void)setSecondaryColor:(id)a0 animated:(BOOL)a1;
- (void)setRecognizedIfNecessaryWithCompletion:(id /* block */)a0;

@end
