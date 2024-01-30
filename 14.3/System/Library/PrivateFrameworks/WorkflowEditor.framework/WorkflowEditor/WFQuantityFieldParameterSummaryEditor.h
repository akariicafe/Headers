@class WFAlert;

@interface WFQuantityFieldParameterSummaryEditor : WFNumberFieldParameterSummaryEditor

@property (retain, nonatomic) WFAlert *unitAlert;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)a0;
- (id)stateForEnteredText:(id)a0;
- (id)stateForVariable:(id)a0;

@end
