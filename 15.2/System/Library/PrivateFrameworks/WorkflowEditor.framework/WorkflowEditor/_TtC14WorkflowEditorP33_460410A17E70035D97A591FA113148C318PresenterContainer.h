@interface _TtC14WorkflowEditorP33_460410A17E70035D97A591FA113148C318PresenterContainer : NSObject <WFStandaloneModuleSummaryPresenterDelegate, WFVariableUIDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ onShowActionOutputPicker;
    void /* unknown type, empty encoding */ onRevealAction;
    void /* unknown type, empty encoding */ onFinish;
    void /* unknown type, empty encoding */ parameterEditingHint;
}

- (void).cxx_destruct;
- (id)init;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowShortcutInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (void)showParameterEditingHint:(id)a0;
- (void)moduleSummaryPresenter:(id)a0 didCommitParameterState:(id)a1;
- (void)moduleSummaryPresenterDidFinish:(id)a0;

@end
