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

+ (Class)layerClass;
+ (id)_defaultAttributes;
+ (id)_defaultFont;

- (struct CGSize { double x0; double x1; })_intrinsicSizeWithinSize:(struct CGSize { double x0; double x1; })a0;
- (void)_prepareForSecondIntrinsicContentSizeCalculationWithLayoutEngineBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setTextColor:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (void)_prepareForFirstIntrinsicContentSizeCalculation;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })textRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 limitedToNumberOfLines:(long long)a1;
- (id)_defaultAttributes;
- (BOOL)_needsDoubleUpdateConstraintsPass;
- (id)_labelLayer;
- (void)layoutSubviews;
- (double)_baselineOffsetFromBottom;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setMultilineContextWidth:(double)a0;
- (double)_lastLineBaseline;
- (double)_firstLineBaseline;
- (double)_firstBaselineOffsetFromTop;
- (double)_multilineContextWidth;
- (double)_preferredMaxLayoutWidth;
- (void)_generateDeferredAnimations:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setNeedsUpdateLayerIfNeeded;
- (id)_materializedAttributedText;
- (void)_ensureSizingLayout;
- (id)_layoutParametersWithinSize:(struct CGSize { double x0; double x1; })a0 forSizing:(BOOL)a1;
- (void)_ensureVisualLayout;
- (id)_attributedTextCompatibleForSizing;
- (void)_mergeDefaultAttributesForDowngradingContent:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
