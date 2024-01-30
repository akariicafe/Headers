@class UIView;
@protocol CLKUIColoringView;

@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView {
    UIView<CLKUIColoringView> *_label;
    double _labelScale;
}

- (void)setForegroundColor:(id)a0;
- (id)_labelFont;
- (void)layoutSubviews;
- (id)init;
- (id)label;
- (void).cxx_destruct;
- (id)initWithFamily:(long long)a0;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_layoutLabel;
- (void)_setFontConfiguration:(struct CDRichComplicationFontConfiguration { BOOL x0; id x1; double x2; })a0;
- (void)_setLayoutTransformToView:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1 centerScale:(double)a2;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;

@end
