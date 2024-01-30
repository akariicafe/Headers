@interface WorkflowEditor.FilePickerParameterSummaryEditor : WFModuleSummaryEditor <UIDocumentPickerDelegate, UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ modal;
}

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)documentPickerWasCancelled:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0;

@end
