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
@property (copy, nonatomic) id /* block */ attributedTextProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)_numberOfLinesForLayout:(id)a0;
+ (id)labelWithAttributedString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;
+ (id)labelWithString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;

- (void)setAdjustsFontSizeToFitWidth:(BOOL)a0;
- (void)setTextColor:(id)a0;
- (void)setFont:(id)a0;
- (void)setLineBreakMode:(long long)a0;
- (void)setNumberOfLines:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)drawTextInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setHighlighted:(BOOL)a0;
- (void)setAttributedText:(id)a0;
- (void)tintColorDidChange;
- (id)attributedText;
- (void)traitCollectionDidChange:(id)a0;
- (id)defaultParagraphStyle;
- (void).cxx_destruct;
- (void)setBaselineAdjustment:(long long)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;
- (void)_updateTextColor;
- (void)setVuiBackgroundColor:(id)a0;
- (id)vuiBackgroundColor;
- (struct CGSize { double x0; double x1; })vui_layoutSubviews:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)vui_setHighlighted:(BOOL)a0;
- (void)vui_setSelected:(BOOL)a0 animated:(BOOL)a1 withAnimationCoordinator:(id)a2;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (void)revertTintColor;
- (void)_clearCachedValues;
- (void)_configureAlignmentIfNeeded;
- (id)_rangeOfStringExcludingAttachments;
- (void)_updateCompositingFilter;
- (void)_updateTextColor:(BOOL)a0;
- (BOOL)_updateTextColorExcludingAttachments:(id)a0;
- (double)baselineHeight;
- (double)bottomMarginWithBaselineMargin:(double)a0 maximumContentSizeCategory:(unsigned long long)a1;
- (unsigned long long)numberOfLinesRequiredForTextWidth:(double)a0;
- (BOOL)requiresMoreThanOneLineForTextWidth:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)topMarginWithBaselineMargin:(double)a0 maximumContentSizeCategory:(unsigned long long)a1;
- (double)vui_baselineOffsetFromBottom;

@end
