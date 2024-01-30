@interface _TtCV14WorkflowEditor24MultipleValueHostingView11Coordinator : NSObject <WFVariableUIDelegate, WFMultipleValueEditorViewDelegate> {
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ onShowActionOutputPicker;
    void /* unknown type, empty encoding */ onRevealAction;
}

- (void).cxx_destruct;
- (id)init;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowShortcutInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (void)showParameterEditingHint:(id)a0;
- (void)multipleValueEditorView:(id)a0 didUpdateWithItem:(id)a1;

@end
