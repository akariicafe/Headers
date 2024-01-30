@class NSArray, CALayer, __TVAnimatedImageView;

@interface _TVAnimatedLabel : _TVLabel {
    BOOL _crossfading;
    BOOL _marqueeNeeded;
    BOOL _marqueeing;
    BOOL _starting;
    BOOL _stopping;
    CALayer *_maskLayer;
}

@property (readonly, weak, nonatomic) __TVAnimatedImageView *currentMarqueeView;
@property (readonly, weak, nonatomic) __TVAnimatedImageView *nextMarqueeView;
@property (nonatomic, getter=isAnimating) BOOL animating;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) double marqueeDelay;
@property (nonatomic) double replicationPadding;
@property (nonatomic) double maskCapWidth;
@property (nonatomic) float scrollRate;
@property (nonatomic) double crossfadeDuration;
@property (copy, nonatomic) NSArray *attributedStrings;
@property (readonly, nonatomic) unsigned long long currentAttributedStringIndex;
@property (nonatomic) double underPosterOutset;

- (void)stopAnimating;
- (void)setMarqueeEnabled:(BOOL)a0;
- (void)didMoveToWindow;
- (void)setNeedsDisplay;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setAttributedText:(id)a0;
- (void)_applicationDidBecomeActiveNotification:(id)a0;
- (void)dealloc;
- (BOOL)_isRTL;
- (void).cxx_destruct;
- (void)_applicationWillResignActiveNotification:(id)a0;
- (void)setMarqueeRunning:(BOOL)a0;
- (void)stopAndResetScrollWithDuration:(double)a0;
- (void)_clearAnimations;
- (void)_clearAttributedStrings;
- (void)_prepareNextMarqueeWithDelay:(double)a0;
- (id)_rasterizedTextWithMarquee:(BOOL)a0;
- (BOOL)_shouldCycle;
- (void)_startMarqueeIfNeeded;
- (void)stopAnimatingWithoutResetWithDuration:(double)a0;

@end
