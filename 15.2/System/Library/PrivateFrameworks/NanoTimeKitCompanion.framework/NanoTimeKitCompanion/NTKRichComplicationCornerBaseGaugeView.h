@class NTKRichComplicationCurvedProgressView, NTKCurvedColoringLabel;

@interface NTKRichComplicationCornerBaseGaugeView : NTKRichComplicationCornerView {
    NTKCurvedColoringLabel *_leftLabel;
    NTKRichComplicationCurvedProgressView *_progressView;
    NTKCurvedColoringLabel *_rightLabel;
}

+ (long long)progressFillStyle;
+ (BOOL)isMeteredProgressView;

- (void)setPosition:(long long)a0;
- (void)layoutSubviews;
- (id)progressView;
- (id)leftLabel;
- (void).cxx_destruct;
- (id)init;
- (id)rightLabel;
- (void)transitionToMonochromeWithFraction:(double)a0;
- (void)updateMonochromeColor;
- (void)_editingDidEnd;
- (void)handleGaugeProvider:(id)a0 leftTextProvider:(id)a1 rightTextProvider:(id)a2;
- (void)_enumerateLabelsWithBlock:(id /* block */)a0;
- (void)_layoutSubviewsWithoutAnimation;
- (double)_progressViewHorizontalPaddingInRadius;
- (void)_updateLabelMaxWidths;
- (void)_calculateLabel:(id)a0 center:(struct CGPoint { double x0; double x1; } *)a1 widthInRadius:(double *)a2;
- (double)_calculateProgressWidthWithLeftLabelWidth:(double)a0 rightLabelWidth:(double)a1;
- (double)_layoutLabel:(id)a0 withLabelCenter:(struct CGPoint { double x0; double x1; })a1 labelWidthInRadius:(double)a2 leftInRadius:(double)a3;
- (double)_layoutProgressViewWithBeginAngle:(double)a0 widthInRadius:(double)a1 bottomPadding:(double)a2;

@end
