@interface _TtC14WorkflowEditorP33_4FF4F351C433FF94A8616279ECCFBACD35VariableFieldParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ hasStagedChanges;
}

- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(long long)a3 processing:(BOOL)a4;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryDidFinish;

@end
