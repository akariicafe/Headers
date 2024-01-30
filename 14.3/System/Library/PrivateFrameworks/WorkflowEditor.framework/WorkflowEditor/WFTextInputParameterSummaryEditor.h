@class NSTextAttachment, WFVariableInputCoordinator, NSArray, NSString, WFVariableStringParameterState;

@interface WFTextInputParameterSummaryEditor : WFModuleSummaryEditor <WFVariableTypingContext, WFVariableUIDelegate>

@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (retain, nonatomic) NSTextAttachment *textAttachmentToEdit;
@property (nonatomic) BOOL isPickingMagicVariable;
@property (readonly, nonatomic) BOOL hasChangedText;
@property (readonly, nonatomic) WFVariableStringParameterState *stagedState;
@property (readonly, nonatomic) NSArray *currentVariables;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (void)setVariableProvider:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowExtensionInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (void)setVariableUIDelegate:(id)a0;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;
- (void)textEntryDidFinish;
- (void)textEntryDidPasteWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidCopyWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidCutWithOriginalBlock:(id /* block */)a0;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)sourceViewTintColorDidChange;
- (id)stateByReplacingVariableFromInitialState:(id)a0 withVariable:(id)a1;
- (void)insertVariable:(id)a0;
- (BOOL)doneButtonNeededForInputTraits:(id)a0 allowMultipleLines:(BOOL)a1;
- (void)copyVariableString;
- (void)configureVariableAttachmentForInsertion:(id)a0;

@end
