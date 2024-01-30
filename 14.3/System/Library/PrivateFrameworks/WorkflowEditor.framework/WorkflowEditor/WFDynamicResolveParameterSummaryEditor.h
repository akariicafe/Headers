@class NSString, UIViewController;

@interface WFDynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)parameterValuePickerViewController:(id)a0 didFinishWithObject:(id)a1;
- (void)parameterValuePickerViewControllerDidCancel:(id)a0;
- (void)finishAndDismiss:(BOOL)a0;

@end
