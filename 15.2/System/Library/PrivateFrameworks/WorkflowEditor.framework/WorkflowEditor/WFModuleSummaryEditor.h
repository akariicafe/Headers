@class WFParameter, UIView, NSString, WFTextTokenChooser, WFVariableConfigurationResponder, WFVariable, WFMultipleValueParameterState;
@protocol WFVariableProvider, WFParameterState, WFModuleSummaryEditorDelegate, WFEditorAuxiliaryViewPresenter, WFVariableUIDelegate, WFModuleSummarySupporting, WFSlotTemplateTextEntry;

@interface WFModuleSummaryEditor : NSObject <WFVariableConfigurationResponderDelegate>

@property (retain, nonatomic) WFVariableConfigurationResponder *variableResponder;
@property (nonatomic) BOOL variableResponderSuspended;
@property (nonatomic) BOOL returnToKeyboardOnComplete;
@property (retain, nonatomic) WFTextTokenChooser *variableChooser;
@property (retain, nonatomic) WFVariable *lastValueForEditingVariable;
@property (readonly, nonatomic) WFParameter<WFModuleSummarySupporting> *parameter;
@property (readonly, nonatomic) id<WFParameterState> initialState;
@property (readonly, nonatomic) WFMultipleValueParameterState *initialArrayState;
@property (readonly, nonatomic) id<WFParameterState> currentState;
@property (readonly, nonatomic) unsigned long long arrayIndex;
@property (readonly, nonatomic, getter=isProcessing) BOOL processing;
@property (retain, nonatomic) id<WFModuleSummaryEditorDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (weak, nonatomic) id<WFEditorAuxiliaryViewPresenter> auxiliaryViewPresenter;
@property (readonly, weak, nonatomic) UIView<WFSlotTemplateTextEntry> *textEntry;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;
+ (BOOL)supportsEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (id)initWithParameter:(id)a0 initialState:(id)a1 initialArrayState:(id)a2 arrayIndex:(unsigned long long)a3 processing:(BOOL)a4;
- (void)completeEditing;
- (void)commitState:(id)a0;
- (void)stageState:(id)a0;
- (void)requestTextEntry;
- (void)textEntryWillBegin:(id)a0 allowMultipleLines:(BOOL *)a1;
- (void)textEntryTextDidChange:(id)a0;
- (void)textEntryDidFinish;
- (id)stateByReplacingVariableFromCurrentState:(id)a0 withVariable:(id)a1;
- (BOOL)textEntryShouldChangeText:(id)a0;
- (void)beginVariableMenuForSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (BOOL)variableMenuSupportsVariableSelectionForSlotWithIdentifier:(id)a0;
- (id)variableMenuInitialStateForSlotWithIdentifier:(id)a0;
- (void)beginEditingNewArrayElementFromPresentationAnchor:(id)a0;
- (void)completeEditingWithTextAttachmentToEdit:(id)a0;
- (void)textEntryDidCutWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidCopyWithOriginalBlock:(id /* block */)a0;
- (void)textEntryDidPasteWithOriginalBlock:(id /* block */)a0;
- (void)beginEditingTextAttachment:(id)a0 inSlotWithIdentifier:(id)a1 presentationAnchor:(id)a2;
- (void)sourceViewTintColorDidChange;
- (void)variableResponderDidEndEditing:(id)a0;
- (void)variableResponderDidReturnToKeyboard:(id)a0;
- (BOOL)variableResponderHasText:(id)a0;
- (void)variableResponderDidDelete:(id)a0 withReplacementText:(id)a1;
- (void)variableResponderDidRevealAction:(id)a0;
- (void)variableResponder:(id)a0 didUpdateVariable:(id)a1;
- (void)variableResponder:(id)a0 presentPromptWithTitle:(id)a1 message:(id)a2 fieldConfigurationHandler:(id /* block */)a3 commitHandler:(id /* block */)a4;
- (BOOL)canTypeAlongsideVariables;
- (void)_beginEditingVariableAttachment:(id)a0 slotIdentifier:(id)a1 presentationAnchor:(id)a2;

@end
