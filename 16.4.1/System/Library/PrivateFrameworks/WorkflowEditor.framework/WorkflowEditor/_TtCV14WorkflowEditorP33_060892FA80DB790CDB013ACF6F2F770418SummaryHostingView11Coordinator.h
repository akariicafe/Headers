@interface _TtCV14WorkflowEditorP33_060892FA80DB790CDB013ACF6F2F770418SummaryHostingView11Coordinator : NSObject <WFModuleSummaryCoordinatorDelegate, WFVariableUIDelegate> {
    void /* unknown type, empty encoding */ view;
}

- (id)init;
- (void).cxx_destruct;
- (void)revealAction:(id)a0 preScrollHandler:(id /* block */)a1 goBackHandler:(id /* block */)a2 scrolledAwayHandler:(id /* block */)a3;
- (void)showActionOutputPickerAllowingShortcutInput:(BOOL)a0 variableProvider:(id)a1 completionHandler:(id /* block */)a2;
- (void)showParameterEditingHint:(id)a0;
- (void)showVariableEditorWithOptions:(id)a0 fromSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)summaryCoordinator:(id)a0 disclosureArrowDidChange:(BOOL)a1;
- (void)summaryCoordinatorDidInvalidateSize:(id)a0;
- (id)viewControllerForCoordinator:(id)a0;

@end
