@interface PaperKit.CanvasElementController : NSObject <PKToolPickerObserverPrivate, PKToolPickerPrivateDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shapeStyleController;
    void /* unknown type, empty encoding */ textStyleController;
    void /* unknown type, empty encoding */ signatureStyleController;
    void /* unknown type, empty encoding */ toolPickerController;
    void /* unknown type, empty encoding */ isApplyingStyle;
    void /* unknown type, empty encoding */ editingContainerView;
}

- (id)init;
- (void).cxx_destruct;
- (void)_toolPicker:(id)a0 didChangeColor:(id)a1;
- (BOOL)_toolPicker:(id)a0 shouldChangeSelectedToolColor:(id)a1;
- (id)_toolPickerCurrentSelectionColor:(id)a0;
- (void)_toolPickerDidChangePosition:(id)a0 fromPosition:(long long)a1 toPosition:(long long)a2;
- (void)_toolPickerDidChangeScaleFactor:(id)a0;
- (void)toolPickerFramesObscuredDidChange:(id)a0;

@end
