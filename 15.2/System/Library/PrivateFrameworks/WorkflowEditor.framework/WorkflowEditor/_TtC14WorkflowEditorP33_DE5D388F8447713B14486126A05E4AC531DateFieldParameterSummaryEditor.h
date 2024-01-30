@interface _TtC14WorkflowEditorP33_DE5D388F8447713B14486126A05E4AC531DateFieldParameterSummaryEditor : WorkflowEditor.TextInputParameterSummaryEditor <WFParameterEventObserver> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_hintDateFormatter;
}

- (void).cxx_destruct;
- (void)parameterAttributesDidChange:(id)a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(long long)a3 processing:(BOOL)a4;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryDidFinish;

@end
