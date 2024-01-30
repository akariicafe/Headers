@protocol WFVariableProvider;

@interface WorkflowEditor.QuantityFieldParameterSummaryEditor : WFModuleSummaryEditor {
    void /* unknown type, empty encoding */ unitChooser;
    void /* unknown type, empty encoding */ autocompleteDataSource;
    void /* unknown type, empty encoding */ hasStagedChanges;
    void /* unknown type, empty encoding */ isPickingActionOutput;
    void /* unknown type, empty encoding */ autocompleteCoordinator;
}

@property (nonatomic, retain) id<WFVariableProvider> variableProvider;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(void (^)(void))a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(long long)a3 processing:(BOOL)a4;
- (void)stageState:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryDidFinish;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1;
- (BOOL)textEntryShouldChangeText:(id)a0;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)a0;

@end
