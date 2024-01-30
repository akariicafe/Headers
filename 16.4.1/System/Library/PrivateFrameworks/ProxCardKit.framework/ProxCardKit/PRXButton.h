@interface PRXButton : UIButton

@property (nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) long long proximityButtonType;

+ (id)buttonWithProximityType:(long long)a0;
+ (id)buttonWithProximityType:(long long)a0 usesLegacyStyling:(BOOL)a1;

- (void)setHighlighted:(BOOL)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (double)_minimumIntrinsicHeight;
- (void)toggleActive;

@end
