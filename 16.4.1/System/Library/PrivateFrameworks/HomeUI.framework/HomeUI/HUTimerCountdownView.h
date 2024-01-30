@class MTUITimerCountdownView, UIButton, UIView;
@protocol HUTimerCountdownDelegate;

@interface HUTimerCountdownView : UIView

@property (retain, nonatomic) UIView *circleBackgroundView;
@property (retain, nonatomic) MTUITimerCountdownView *countdownView;
@property (retain, nonatomic) id<HUTimerCountdownDelegate> delegate;
@property (retain, nonatomic) UIButton *pauseResumeButton;
@property (nonatomic) unsigned long long currentState;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)toggle:(id)a0;
- (void).cxx_destruct;
- (id)initWithTimer:(id)a0 delegate:(id)a1;
- (void)updateToNewState:(unsigned long long)a0;
- (void)updateToNewTime:(double)a0;

@end
