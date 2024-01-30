@class NSString, UIViewController;

@interface WFSliderParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)sliderValueChanged:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)sliderTouchUp:(id)a0;

@end
