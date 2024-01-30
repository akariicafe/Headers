@class UIColor, NSString, VUITextLayout;

@interface VUILabel : _TVLabel <VUILabelBaselineProtocol> {
    BOOL _selected;
    BOOL _lastSelectedOrHighlighted;
}

@property (retain, nonatomic) VUITextLayout *textLayout;
@property (retain, nonatomic) UIColor *adjustmentModeNormalTintColor;
@property (copy, nonatomic) NSString *labelName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)labelWithString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;
+ (id)labelWithAttributedString:(id)a0 textLayout:(id)a1 existingLabel:(id)a2;

- (void)_updateTextColor;
- (void)tintColorDidChange;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (double)baselineOffsetFromBottom;
- (void)traitCollectionDidChange:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (double)topMarginWithBaselineMargin:(double)a0;
- (double)bottomMarginWithBaselineMargin:(double)a0;
- (double)topMarginToLabel:(id)a0 withBaselineMargin:(double)a1;
- (double)baselineHeight;
- (void)revertTintColor;
- (void)_updateCompositingFilter;
- (unsigned long long)numberOfLinesRequiredForTextWidth:(double)a0;
- (double)topMarginWithBaselineMargin:(double)a0 maximumContentSizeCategory:(id)a1;
- (double)bottomMarginWithBaselineMargin:(double)a0 maximumContentSizeCategory:(id)a1;
- (void)_updateTextColor:(BOOL)a0;
- (BOOL)requiresMoreThanOneLineForTextWidth:(double)a0;
- (BOOL)vui_showOnHighlight;
- (BOOL)vui_marqueeOnHighlight;

@end
