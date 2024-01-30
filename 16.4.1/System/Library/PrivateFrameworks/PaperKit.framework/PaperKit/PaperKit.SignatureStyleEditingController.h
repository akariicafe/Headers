@interface PaperKit.SignatureStyleEditingController : NSObject <UIPopoverPresentationControllerDelegate, UIColorPickerViewControllerDelegate> {
    void /* unknown type, empty encoding */ controller;
    void /* unknown type, empty encoding */ signatureStyleEditingView;
    void /* unknown type, empty encoding */ isColorPickerPresented;
}

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)colorPickerViewControllerDidFinish:(id)a0;
- (void)didTapColorSwatchWithSender:(id)a0;
- (void)didTapStrokeWidthControlWithSender:(id)a0;

@end
