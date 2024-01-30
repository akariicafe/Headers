@class WFParameter, NSString, WFVariableAttachment, WFVariableConfigurationResponder, WFTextTokenChooser, UIView, WFMultipleValueParameterState;
@protocol WFVariableProvider, WFParameterState, WFModuleSummaryEditorDelegate, WFVariableUIDelegate, WFModuleSummarySupporting, WFSlotTemplateTextEntry;

@interface WFModuleSummaryEditor : NSObject <WFVariableConfigurationResponderDelegate>

@property (retain, nonatomic) WFTextTokenChooser *variableChooser;
@property (retain, nonatomic) WFVariableAttachment *editingVariableAttachment;
@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder;
@property (nonatomic) BOOL variableResponderSuspended;
@property (nonatomic) BOOL returnToKeyboardOnComplete;
@property (readonly, nonatomic) WFParameter<WFModuleSummarySupporting> *parameter;
@property (readonly, nonatomic) id<WFParameterState> initialState;
@property (readonly, nonatomic) WFMultipleValueParameterState *initialArrayState;
@property (readonly, nonatomic) unsigned long long arrayIndex;
@property (readonly, nonatomic, getter=isProcessing) BOOL processing;
@property (weak, nonatomic) id<WFModuleSummaryEditorDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (readonly, weak, nonatomic) UIView<WFSlotTemplateTextEntry> *textEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1;
+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)completeEditing;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)a0;
- (void)commitState:(id)a0;
- (void)stageState:(id)a0;
- (void)beginEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1 sourceView:(id)a2;
- (void)beginVariableMenuForSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)beginEditingNewArrayElementFromSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(unsigned long long)a3 processing:(BOOL)a4;
- (void)textEntryDidFinish;
- (void)textEntryDidPasteWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidCopyWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidCutWithOriginalBlock:(id /* block */)a0;
- (void)textEntryTextDidChange:(id)a0;
- (BOOL)textEntryShouldChangeText:(id)a0;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)sourceViewTintColorDidChange;
- (void)requestTextEntry;
- (void)variableResponderDidEndEditing:(id)a0;
- (void)variableResponderDidReturnToKeyboard:(id)a0;
- (BOOL)variableResponderHasText:(id)a0;
- (void)variableResponderDidDelete:(id)a0 withReplacementText:(id)a1;
- (void)variableResponderDidRevealAction:(id)a0;
- (void)variableResponder:(id)a0 didUpdateVariable:(id)a1;
- (void)variableResponder:(id)a0 presentPromptWithTitle:(id)a1 message:(id)a2 fieldConfigurationHandler:(id /* block */)a3 commitHandler:(id /* block */)a4;
- (void)commitMultipleState:(id)a0;
- (void)completeEditingWithTextAttachmentToEdit:(id)a0;
- (BOOL)canTypeAlongsideVariables;
- (id)stateByReplacingVariableFromInitialState:(id)a0 withVariable:(id)a1;
- (void)_beginEditingVariableAttachment:(id)a0 withParentView:(id)a1;

@end
