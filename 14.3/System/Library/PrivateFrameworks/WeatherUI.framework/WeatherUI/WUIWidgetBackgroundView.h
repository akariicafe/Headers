@class WUIWeatherConditionBackgroundView;

@interface WUIWidgetBackgroundView : UIView

@property (retain, nonatomic) WUIWeatherConditionBackgroundView *condtionBackground;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setConditionCode:(long long)a0 isDay:(BOOL)a1;

@end
