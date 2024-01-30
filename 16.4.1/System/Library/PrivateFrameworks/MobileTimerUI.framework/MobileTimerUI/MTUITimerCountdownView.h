@class UIColor, CALayer, CAShapeLayer;

@interface MTUITimerCountdownView : UIView

@property (retain) CAShapeLayer *backgroundCircleLayer;
@property (retain) CAShapeLayer *countdownCircleLayer;
@property (retain) UIColor *barColor;
@property (retain) UIColor *backgroundBarColor;
@property double barWidth;
@property (retain) CALayer *mainLayer;
@property double remainingTime;
@property double duration;
@property long long state;

- (BOOL)isStarted;
- (void)setupBackgroundCircle;
- (void)pause;
- (double)angleForValue:(double)a0 total:(double)a1;
- (void)layoutSubviews;
- (double)degToRad:(double)a0;
- (void)stop;
- (void)start;
- (id)initWithBarColor:(id)a0 backgroundBarColor:(id)a1 barWidth:(double)a2 remainingTime:(double)a3 duration:(double)a4;
- (void)setAnimationRemainingTime:(double)a0 totalTime:(double)a1;
- (id)initWithBarColor:(id)a0 backgroundBarColor:(id)a1 barWidth:(double)a2;
- (void).cxx_destruct;
- (void)resume;

@end
