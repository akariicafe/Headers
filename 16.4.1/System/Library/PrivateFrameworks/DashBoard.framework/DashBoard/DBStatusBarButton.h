@class UIColor;

@interface DBStatusBarButton : UIButton

@property (retain, nonatomic) UIColor *focusHighlightColor;

+ (id)buttonWithType:(long long)a0;

- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)pressesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)pressesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)pressesEnded:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
