@class _SBIconProgressPausedTransition, CADisplayLink, _SBIconProgressFractionTransition, _SBIconProgressStateTransition;
@protocol SBIconProgressViewDelegate;

@interface SBIconProgressView : UIView {
    long long _modelState;
    BOOL _modelPaused;
    double _modelFraction;
    CADisplayLink *_displayLink;
    double _lastUpdate;
}

@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double circleRadiusFraction;
@property (nonatomic) double pauseRadiusFraction;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } circleBoundingRect;
@property (nonatomic) long long displayedState;
@property (nonatomic) BOOL displayingPaused;
@property (nonatomic) double displayedFraction;
@property (retain, nonatomic) _SBIconProgressStateTransition *activeStateTransition;
@property (retain, nonatomic) _SBIconProgressPausedTransition *activePausedTransition;
@property (retain, nonatomic) _SBIconProgressFractionTransition *activeFractionTransition;
@property (weak, nonatomic) id<SBIconProgressViewDelegate> delegate;
@property (nonatomic) BOOL canAnimate;
@property (nonatomic) BOOL hasOpaqueIconImage;
@property (nonatomic) struct SBIconImageInfo { struct CGSize { double width; double height; } size; double scale; double continuousCornerRadius; } iconImageInfo;

+ (id)_pieImagesMemoryPool;
+ (id)_pieImageAtFraction:(double)a0;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_onDisplayLink:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)description;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)_updateTransitionsAnimated:(BOOL)a0;
- (void)_clearDisplayLink;
- (void)_updatePausedTransitionAnimated:(BOOL)a0;
- (void)_updateStateTransitionAnimated:(BOOL)a0;
- (void)_updateFractionTransitionAnimated:(BOOL)a0;
- (BOOL)_hasActiveTransitions;
- (void)_ensureDisplayLink;
- (void)_drawPieWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawOutgoingCircleWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawIncomingCircleWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawPauseUIWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (double)_circleScaleFactor;
- (void)setState:(long long)a0 paused:(BOOL)a1 fractionLoaded:(double)a2 animated:(BOOL)a3;

@end
