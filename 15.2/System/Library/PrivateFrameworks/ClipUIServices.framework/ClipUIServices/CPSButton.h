@class NSString;

@interface CPSButton : UIButton

@property (nonatomic) BOOL animatesAlphaWhenHighlighted;
@property (nonatomic) double tapTargetSideMargin;
@property (copy, nonatomic) NSString *extraTapTargetSubstring;

- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)updateCornerRadius;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithTitle:(id)a0 enabledTitleColor:(id)a1 disabledTitleColor:(id)a2 backgroundColor:(id)a3 textStyle:(id)a4 cornerRadius:(double)a5 animatesAlphaWhenHighlighted:(BOOL)a6;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_boundingRectForSubstring:(id)a0;

@end
