@interface _TtC14WorkflowEditorP33_88919392127B4CC4A9712067A850793640ConditionalSubjectParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ chooser;
    void /* unknown type, empty encoding */ homeServiceModal;
}

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(long long)a3 processing:(BOOL)a4;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1;
- (void)beginVariableMenuForSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;

@end
