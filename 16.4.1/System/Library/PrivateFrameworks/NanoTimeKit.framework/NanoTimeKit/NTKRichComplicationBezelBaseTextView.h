@class UIView;
@protocol CLKUIColoringView;

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView {
    UIView<CLKUIColoringView> *_label;
    double _labelRotationInDegree;
    double _labelScale;
}

- (void)setForegroundColor:(id)a0;
- (id)_labelFont;
- (void)layoutSubviews;
- (id)init;
- (id)label;
- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_editingDidEnd;
- (void)_layoutLabel;
- (void)_setEditingTransitionFraction:(double)a0 direction:(long long)a1 position:(long long)a2 type:(long long)a3;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)a0 direction:(long long)a1 position:(long long)a2;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;

@end
