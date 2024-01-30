@class NSString, UIViewController;

@interface WFContactFieldParameterSummaryEditor : WFModuleSummaryEditor <WFRecipientFieldViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) UIViewController *presentedViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)a0;
- (void)beginEditingNewArrayElementFromSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)recipientViewControllerDidFinish:(id)a0 cancelled:(BOOL)a1;
- (void)presentContactChooserWithSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)presentSinglePickerFromSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;

@end
