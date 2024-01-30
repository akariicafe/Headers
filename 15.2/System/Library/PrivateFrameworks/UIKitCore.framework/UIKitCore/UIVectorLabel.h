@class UIColor, NSString, UIFont, NSMutableDictionary, _UILabelContent, NSAttributedString, _UIVectorTextLayout;

@interface UIVectorLabel : UIView {
    _UILabelContent *_content;
    NSMutableDictionary *_defaultAttributes;
    UIColor *_textColor;
    _UIVectorTextLayout *_sizingLayout;
    _UIVectorTextLayout *_visualLayout;
    struct { unsigned char usesExplicitPreferredMaxLayoutWidth : 1; } _labelFlags;
    double _multilineContextWidth;
}

@property (retain, nonatomic, getter=_content, setter=_setContent:) _UILabelContent *_content;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) unsigned long long numberOfLines;
@property (nonatomic) double preferredMaxLayoutWidth;
@property (copy, nonatomic, setter=_setAttributedText:) NSAttributedString *_attributedText;

+ (id)_defaultAttributes;
+ (id)_defaultFont;
+ (Class)layerClass;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)layoutSubviews;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (double)_baselineOffsetFromBottom;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_labelLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;
- (double)_preferredMaxLayoutWidth;
- (id)_defaultAttributes;
- (void)_setTextColor:(id)a0;
- (void).cxx_destruct;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)_multilineContextWidth;
- (void)_setNeedsUpdateLayerIfNeeded;
- (id)_materializedAttributedText;
- (void)_ensureSizingLayout;
- (id)_layoutParametersWithinSize:(struct CGSize { double x0; double x1; })a0 forSizing:(BOOL)a1;
- (id)_attributedTextCompatibleForSizing;
- (void)_ensureVisualLayout;
- (void)_mergeDefaultAttributesForDowngradingContent:(id)a0;
- (void)_setMultilineContextWidth:(double)a0;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (void)_generateDeferredAnimations:(id)a0;
- (double)_lastLineBaseline;
- (double)_firstBaselineOffsetFromTop;
- (double)_firstLineBaseline;

@end
