@interface WorkflowEditor.DynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ presentedViewController;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (void)parameterValuePickerViewController:(id)a0 didFinishWithParameterState:(id)a1;
- (void)parameterValuePickerViewControllerDidCancel:(id)a0;

@end
