@interface _TtCV14WorkflowEditorP33_060892FA80DB790CDB013ACF6F2F770418SummaryHostingView11Coordinator : NSObject <WFModuleSummaryCoordinatorDelegate, WFVariableUIDelegate> {
    void /* unknown type, empty encoding */ view;
    void /* unknown type, empty encoding */ lastComputedViewSize;
}

- (void).cxx_destruct;
- (id)init;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowShortcutInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (void)showParameterEditingHint:(id)a0;
- (void)showVariableEditorWithOptions:(id)a0 fromSourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)viewControllerForCoordinator:(id)a0;
- (void)summaryCoordinatorDidInvalidateSize:(id)a0;
- (void)summaryCoordinator:(id)a0 disclosureArrowDidChange:(BOOL)a1;

@end
