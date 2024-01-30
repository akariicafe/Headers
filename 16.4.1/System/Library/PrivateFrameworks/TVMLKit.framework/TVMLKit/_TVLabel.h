@interface _TVLabel : UILabel

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedTextRectForBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousBounds;
@property (nonatomic) long long previousNumberOfLines;
@property (nonatomic) struct CGSize { double width; double height; } cachedSizeThatFits;
@property (nonatomic) struct CGSize { double width; double height; } previousTargetSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;

- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (void)setTextColor:(id)a0;
- (void)setFont:(id)a0;
- (void)setLineBreakMode:(long long)a0;
- (void)setNumberOfLines:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setAttributedText:(id)a0;
- (void)setBaselineAdjustment:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;
- (void)_clearCachedValues;

@end
