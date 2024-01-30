@class _VUISBInstallProgressStateTransition, _VUISBIconProgressFractionTransition, UIImage, _VUISBIconProgressPausedTransition, CADisplayLink;
@protocol VUISBIconProgressViewDelegate;

@interface VUISBIconProgressView : UIView {
    _VUISBInstallProgressStateTransition *_activeStateTransition;
    _VUISBIconProgressPausedTransition *_activePausedTransition;
    _VUISBIconProgressFractionTransition *_activeFractionTransition;
    long long _modelState;
    BOOL _modelPaused;
    double _modelFraction;
    CADisplayLink *_displayLink;
    double _lastUpdate;
    UIImage *_maskImage;
}

@property (nonatomic) double backgroundAlpha;
@property (nonatomic) double foregroundAlpha;
@property (nonatomic) double circleRadiusFraction;
@property (nonatomic) double pauseRadiusFraction;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } circleBoundingRect;
@property (nonatomic) long long displayedState;
@property (nonatomic) BOOL displayingPaused;
@property (nonatomic) double displayedFraction;
@property (nonatomic) id<VUISBIconProgressViewDelegate> delegate;
@property (retain, nonatomic) UIImage *overlayImage;
@property (nonatomic) BOOL canAnimate;

+ (id)_pieImagesMemoryPool;
+ (id)_pieImageAtFraction:(double)a0;

- (void)_onDisplayLink:(id)a0;
- (void)dealloc;
- (void)_updateTransitionsAnimated:(BOOL)a0;
- (void)_clearDisplayLink;
- (void)_updatePausedTransitionAnimated:(BOOL)a0;
- (void)_updateStateTransitionAnimated:(BOOL)a0;
- (void)_updateFractionTransitionAnimated:(BOOL)a0;
- (BOOL)_hasActiveTransitions;
- (void)_drawPieWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawOutgoingCircleWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawIncomingCircleWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)_drawPauseUIWithCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setState:(long long)a0 paused:(BOOL)a1 fractionLoaded:(double)a2 animated:(BOOL)a3;
- (id)_maskImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_ensureDisplayLink;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_clearTransitionIfComplete:(id *)a0;

@end
