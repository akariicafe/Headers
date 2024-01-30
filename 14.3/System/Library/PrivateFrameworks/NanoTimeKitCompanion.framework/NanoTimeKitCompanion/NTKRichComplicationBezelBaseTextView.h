@class UIView;
@protocol NTKColoringView;

@interface NTKRichComplicationBezelBaseTextView : NTKRichComplicationBezelView {
    UIView<NTKColoringView> *_label;
    double _labelRotationInDegree;
    double _labelScale;
}

- (void)setForegroundColor:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_labelFont;
- (void)layoutSubviews;
- (id)label;
- (id)_createLabelViewWithFont:(id)a0;
- (void)_editingDidEnd;
- (void)_setEditingTransitionFraction:(double)a0 direction:(long long)a1 position:(long long)a2 type:(long long)a3;
- (void)_transitToHighlightState:(BOOL)a0 fraction:(double)a1;
- (void)_setWhistlerAnalogEditingTransitonFraction:(double)a0 direction:(long long)a1 position:(long long)a2;
- (void)_layoutLabel;

@end
