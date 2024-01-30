@class CALayer, HKUITodayCirclePulseBackground, UIView;

@interface HKUITodayCirclePulseView : UIView {
    UIView *_backgroundContainer;
    HKUITodayCirclePulseBackground *_background;
    CALayer *_dayLabel;
}

@property (nonatomic) double circleDiameter;

- (void)_layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)pulse:(id /* block */)a0;
- (void)setDayLabelContent:(id)a0;

@end
