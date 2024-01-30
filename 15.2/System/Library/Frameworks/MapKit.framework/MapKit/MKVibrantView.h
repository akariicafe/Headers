@interface MKVibrantView : UIVisualEffectView

@property (nonatomic) long long style;

- (void)setContinuousCornerRadius:(double)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithEffect:(id)a0;
- (void)didMoveToWindow;
- (void)setBackgroundColor:(id)a0;

@end
