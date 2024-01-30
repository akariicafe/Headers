@interface SwiftUI.PopoverPresentationDelegate : NSObject <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
}

- (void)prepareForPopoverPresentation:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)popoverPresentationController:(id)a0 willRepositionPopoverToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 inView:(id *)a2;
- (id)init;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;

@end
