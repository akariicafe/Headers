@interface PRXButton : UIButton

@property (readonly, nonatomic) long long proximityButtonType;

+ (id)buttonWithProximityType:(long long)a0 usesLegacyStyling:(BOOL)a1;
+ (id)buttonWithProximityType:(long long)a0;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_minimumIntrinsicHeight;
- (void)setHighlighted:(BOOL)a0;

@end
