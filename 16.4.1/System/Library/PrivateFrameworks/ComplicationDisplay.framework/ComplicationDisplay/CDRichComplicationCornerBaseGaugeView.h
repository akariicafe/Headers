@class CLKUICurvedColoringLabel, CDRichComplicationCurvedProgressView;

@interface CDRichComplicationCornerBaseGaugeView : CDRichComplicationCornerView {
    CLKUICurvedColoringLabel *_leftLabel;
    CDRichComplicationCurvedProgressView *_progressView;
    CLKUICurvedColoringLabel *_rightLabel;
}

+ (BOOL)isMeteredProgressView;
+ (long long)progressFillStyle;

- (void)setPosition:(long long)a0;
- (void)layoutSubviews;
- (id)progressView;
- (void).cxx_destruct;
- (id)leftLabel;
- (id)rightLabel;
- (void)_editingDidEnd;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (double)_progressViewHorizontalPaddingInRadius;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)handleGaugeProvider:(id)a0 leftTextProvider:(id)a1 rightTextProvider:(id)a2;
- (id)initWithFontFallback:(long long)a0;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_layoutSubviewsWithoutAnimation;
- (void)_calculateLabel:(id)a0 center:(struct CGPoint { double x0; double x1; } *)a1 widthInRadius:(double *)a2;
- (double)_calculateProgressWidthWithLeftLabelWidth:(double)a0 rightLabelWidth:(double)a1;
- (double)_layoutLabel:(id)a0 withLabelCenter:(struct CGPoint { double x0; double x1; })a1 labelWidthInRadius:(double)a2 leftInRadius:(double)a3;
- (double)_layoutProgressViewWithBeginAngle:(double)a0 widthInRadius:(double)a1 bottomPadding:(double)a2;
- (void)_updateLabelMaxWidths;

@end
