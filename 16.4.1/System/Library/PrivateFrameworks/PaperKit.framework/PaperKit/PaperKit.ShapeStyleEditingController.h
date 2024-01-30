@interface PaperKit.ShapeStyleEditingController : NSObject <_UIColorPickerViewControllerDelegate, UIGestureRecognizerDelegate, PaperKit.ValueEditingViewControllerDelegate> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ viewControllerProvider;
    void /* unknown type, empty encoding */ shapeStyleEditingView;
    void /* unknown type, empty encoding */ isCompactUI;
    void /* unknown type, empty encoding */ defaultStrokeColor;
    void /* unknown type, empty encoding */ defaultFillColor;
    void /* unknown type, empty encoding */ editingAttribute;
}

- (id)init;
- (void).cxx_destruct;
- (void)_colorPickerViewControllerDidDeselectColor:(id)a0;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)didChangeOpacitySlider;
- (void)didFinishChangingOpacitySlider;
- (void)didStartChangingOpacitySlider;
- (void)didTapCompactOpacityButtonForEvent:(id)a0;
- (void)didTapFillColorButtonForEvent:(id)a0;
- (void)didTapStrokeColorButtonForEvent:(id)a0;
- (void)didTapStrokeWidthButtonForEvent:(id)a0;
- (void)lineTypeControlValueChanged;
- (void)valueEditingViewController:(id)a0 didChangeValue:(long long)a1;
- (void)valueEditingViewController:(id)a0 didFinishChangingValue:(long long)a1;
- (void)valueEditingViewController:(id)a0 didStartChangingValue:(long long)a1;

@end
