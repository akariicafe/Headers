@class UIView;
@protocol NTKColoringView;

@interface NTKRichComplicationCircularBaseTextView : NTKRichComplicationCircularBaseView {
    UIView<NTKColoringView> *_label;
    double _labelScale;
}

- (void)setForegroundColor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_labelFont;
- (void)layoutSubviews;
- (id)label;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;
- (void)_layoutLabel;
- (void)_setLayoutTransformToView:(id)a0 origin:(struct CGPoint { double x0; double x1; })a1 centerScale:(double)a2;

@end
