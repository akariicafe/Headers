@interface HUColoredButton : UIButton

@property (nonatomic) double highlightedAlpha;
@property (nonatomic) double highlightedTextAlpha;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL backgroundColorFollowsTintColor;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 highlightedAlpha:(double)a1 highlightedTextAlpha:(double)a2;

@end
