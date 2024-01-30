@interface WorkflowEditor.EnumerationParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ valuePicker;
}

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 arrayIndex:(long long)a1 processing:(BOOL)a2;
- (void)completeEditing;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0;
- (id)customMenuElementsForSlotWithIdentifier:(id)a0 style:(unsigned long long)a1;

@end
