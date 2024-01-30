@interface _TtC14WorkflowEditorP33_460410A17E70035D97A591FA113148C318PresenterContainer : NSObject <WFStandaloneModuleSummaryPresenterDelegate, WFVariableUIDelegate> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ coordinator;
    void /* unknown type, empty encoding */ onShowActionOutputPicker;
    void /* unknown type, empty encoding */ onRevealAction;
    void /* unknown type, empty encoding */ onFinish;
    void /* unknown type, empty encoding */ parameterEditingHint;
}

- (id)init;
- (void).cxx_destruct;
- (void)moduleSummaryPresenter:(id)a0 didCommitParameterState:(id)a1;
- (void)moduleSummaryPresenter:(id)a0 didStageParameterState:(id)a1;
- (void)moduleSummaryPresenterDidFinish:(id)a0;
- (void)revealAction:(id)a0 preScrollHandler:(id /* block */)a1 goBackHandler:(id /* block */)a2 scrolledAwayHandler:(id /* block */)a3;
- (void)showActionOutputPickerAllowingShortcutInput:(BOOL)a0 variableProvider:(id)a1 completionHandler:(id /* block */)a2;
- (void)showParameterEditingHint:(id)a0;

@end
