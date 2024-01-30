@interface WorkflowEditor.WFPosterPickerParameterSummaryEditor : WFModuleSummaryEditor <PRUIModalControllerDelegate> {
    void /* unknown type, empty encoding */ presentedViewController;
    void /* unknown type, empty encoding */ controller;
}

- (void).cxx_destruct;
- (void)modalController:(id)a0 didDismissSheetWithResponse:(id)a1;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;

@end
