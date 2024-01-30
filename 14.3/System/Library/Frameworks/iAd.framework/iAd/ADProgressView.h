@class UILabel, ADPrerollSlider;

@interface ADProgressView : UIView

@property (retain, nonatomic) UILabel *elapsedTimeLabel;
@property (retain, nonatomic) UILabel *remainingTimeLabel;
@property (retain, nonatomic) ADPrerollSlider *slider;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setElapsedTime:(double)a0 totalTime:(double)a1;

@end
