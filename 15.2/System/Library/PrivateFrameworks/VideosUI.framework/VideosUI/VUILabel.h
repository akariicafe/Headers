@class UIColor, NSString, VUITextLayout, UIFont, NSAttributedString;

@interface VUILabel : UILabel <VUILabelBaselineProtocol> {
    BOOL _selected;
    BOOL _lastSelectedOrHighlighted;
}

@property (retain, nonatomic) VUITextLayout *textLayout;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cachedTextRectForBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } previousBounds;
@property (nonatomic) long long previousNumberOfLines;
@property (nonatomic) struct CGSize { double width; double height; } cachedSizeThatFits;
@property (nonatomic) struct CGSize { double width; double height; } previousTargetSize;
@property (retain, nonatomic) UIColor *adjustmentModeNormalTintColor;
@property (copy, nonatomic) NSString *labelName;
@property (nonatomic) unsigned long long vuiNumberOfLines;
@property (readonly, nonatomic) double vuiBaselineHeight;
@property (retain, nonatomic) NSAttributedString *vuiAttributedText;
@property (readonly, nonatomic) UIFont *vuiFont;
@property (copy, nonatomic) NSString *vuiText;
@property (nonatomic) long long vuiTextAlignment;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelWithString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;
+ (unsigned long long)_numberOfLinesForLayout:(id)a0;
+ (id)labelWithAttributedString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;

- (void)setFont:(id)a0;
- (void)_updateTextColor;
- (id)attributedText;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setHighlighted:(BOOL)a0;
- (void)setNumberOfLines:(long long)a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;
- (void)setLineBreakMode:(long long)a0;
- (void)setText:(id)a0;
- (void)setAttributedText:(id)a0;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (void).cxx_destruct;
- (void)setBaselineAdjustment:(long long)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setTextColor:(id)a0;
- (void)tintColorDidChange;
- (void)_clearCachedValues;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)baselineHeight;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)vui_baselineOffsetFromBottom;
- (double)topMarginWithBaselineMargin:(double)a0 maximumContentSizeCategory:(unsigned long long)a1;
- (double)bottomMarginWithBaselineMargin:(double)a0 maximumContentSizeCategory:(unsigned long long)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (void)vui_setHighlighted:(BOOL)a0;
- (void)setVuiBackgroundColor:(id)a0;
- (void)_updateCompositingFilter;
- (void)_configureAlignmentIfNeeded;
- (unsigned long long)numberOfLinesRequiredForTextWidth:(double)a0;
- (void)_updateTextColor:(BOOL)a0;
- (void)vui_setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (BOOL)requiresMoreThanOneLineForTextWidth:(double)a0;
- (void)revertTintColor;
- (id)vuiBackgroundColor;

@end
