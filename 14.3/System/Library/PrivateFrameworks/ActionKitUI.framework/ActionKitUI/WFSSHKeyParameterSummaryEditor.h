@class WFSSHKeyConfigurationViewController, NSString;

@interface WFSSHKeyParameterSummaryEditor : WFModuleSummaryEditor <WFSSHKeyConfigurationViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (weak, nonatomic) WFSSHKeyConfigurationViewController *viewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)keyConfigurationViewControllerDidFinish:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)completeEditing;

@end
