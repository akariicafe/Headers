@interface WorkflowEditor.EnumerationParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ valuePicker;
}

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(long long)a3 processing:(BOOL)a4;
- (void)completeEditing;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0;

@end
