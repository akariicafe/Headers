@interface _TtCV14WorkflowEditor16TagFieldHostView11Coordinator : NSObject <WFVariableUIDelegate> {
    void /* unknown type, empty encoding */ hostView;
}

- (void).cxx_destruct;
- (id)init;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowShortcutInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (void)showParameterEditingHint:(id)a0;

@end
