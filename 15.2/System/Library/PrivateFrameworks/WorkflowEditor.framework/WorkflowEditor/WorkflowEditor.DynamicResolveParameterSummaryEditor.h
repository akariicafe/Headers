@interface WorkflowEditor.DynamicResolveParameterSummaryEditor : WFModuleSummaryEditor <WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ presentedViewController;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(long long)a3 processing:(BOOL)a4;
- (void)parameterValuePickerViewControllerDidCancel:(id)a0;
- (void)parameterValuePickerViewController:(id)a0 didFinishWithParameterState:(id)a1;

@end
