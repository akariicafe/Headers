@class UILabel, NSTimer;

@interface PMiOSTimeLabelView : UIView

@property (retain, nonatomic) UILabel *timeLabel;
@property (retain, nonatomic) NSTimer *hideDelayTimer;
@property (nonatomic) double elapsedTime;
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL showsRemainingTime;
@property (nonatomic) BOOL showsTotalTime;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_stringFromTimeInterval:(double)a0;
- (id)_labelTextForElapsedInterval:(double)a0;
- (void)hideAfterDelay:(double)a0;
- (void)hideTimerAction;
- (void)showMomentarilyAnimated:(BOOL)a0;

@end
