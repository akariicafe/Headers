@class WFStringParameterState;

@interface WFVariableFieldParameterSummaryEditor : WFModuleSummaryEditor

@property (retain, nonatomic) WFStringParameterState *stagedState;
@property (nonatomic) BOOL hasChangedText;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)textEntryDidFinish;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;

@end
