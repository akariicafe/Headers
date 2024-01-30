@class NSHashTable, WFModuleSummaryTemplateBuilder, NSArray, NSString, NSSet, NSMutableDictionary, NSDictionary, WFSlotTemplateView, WFModuleSummaryEditor, WFSlotIdentifier, WFVariable;
@protocol WFVariableProvider, WFModuleSummaryCoordinatorDelegate, WFEditorAuxiliaryViewPresenter, WFVariableUIDelegate;

@interface WFModuleSummaryCoordinator : NSObject <WFSlotTemplateViewDelegate, WFModuleSummaryEditorDelegate, WFVariableDelegate>

@property (copy, nonatomic) NSArray *contents;
@property (retain, nonatomic) NSMutableDictionary *mutableStagedParameterStates;
@property (retain, nonatomic) WFModuleSummaryEditor *currentEditor;
@property (retain, nonatomic) WFSlotIdentifier *currentlyEditingSlotIdentifier;
@property (retain, nonatomic) WFSlotIdentifier *currentlyTypingSlotIdentifier;
@property (retain, nonatomic) WFModuleSummaryTemplateBuilder *templateBuilder;
@property (retain, nonatomic) WFVariable *variableBeingEdited;
@property (retain, nonatomic) NSHashTable *variablesBeingObserved;
@property (readonly, copy, nonatomic) NSString *summaryFormatString;
@property (readonly, copy, nonatomic) NSSet *parameters;
@property (readonly, copy, nonatomic) NSSet *editableParameters;
@property (readonly, copy, nonatomic) NSDictionary *parameterStates;
@property (readonly, copy, nonatomic) NSDictionary *stagedParameterStates;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (nonatomic) BOOL processing;
@property (weak, nonatomic) id<WFModuleSummaryCoordinatorDelegate> delegate;
@property (weak, nonatomic) id<WFVariableProvider> variableProvider;
@property (weak, nonatomic) id<WFVariableUIDelegate> variableUIDelegate;
@property (weak, nonatomic) id<WFEditorAuxiliaryViewPresenter> auxiliaryViewPresenter;
@property (retain, nonatomic) WFSlotTemplateView *templateView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)enumerateVariableAttachmentsInContents:(id)a0 withBlock:(id /* block */)a1;
+ (id)parameterStatesByApplyingStaging:(id)a0 toOriginal:(id)a1;
+ (double)heightForWidth:(double)a0 withSummaryFormatString:(id)a1 parameters:(id)a2 editableParameters:(id)a3 parameterStates:(id)a4 stagedParameterStates:(id)a5 horizontalPadding:(double)a6 font:(id)a7 unpopulatedFont:(id)a8 textAlignment:(long long)a9;

- (void).cxx_destruct;
- (id)init;
- (id)parameterForKey:(id)a0;
- (void)variableDidChange:(id)a0;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)setSummaryFormatString:(id)a0 withParameters:(id)a1 editableParameters:(id)a2 parameterStates:(id)a3;
- (void)summaryEditor:(id)a0 willUpdateVariable:(id)a1;
- (void)summaryEditor:(id)a0 didStageParameterState:(id)a1;
- (void)summaryEditor:(id)a0 didCommitParameterState:(id)a1;
- (void)summaryEditorDidRequestTextEntry:(id)a0;
- (void)summaryEditorDidFinish:(id)a0 returnToKeyboard:(BOOL)a1 withTextAttachmentToEdit:(id)a2;
- (void)slotTemplateView:(id)a0 didSelectSlotWithIdentifier:(id)a1;
- (void)slotTemplateView:(id)a0 didDeselectSlotWithIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)slotTemplateView:(id)a0 shouldActivateContextMenuForSlotWithIdentifier:(id)a1;
- (void)slotTemplateView:(id)a0 didActivateContextMenuForSlotWithIdentifier:(id)a1 textAttachmentToSelect:(id)a2;
- (BOOL)slotTemplateView:(id)a0 shouldTapTextAttachment:(id)a1 inSlotWithIdentifier:(id)a2;
- (void)slotTemplateView:(id)a0 didTapTextAttachment:(id)a1 inSlotWithIdentifier:(id)a2;
- (void)slotTemplateView:(id)a0 willBeginTypingInSlotWithIdentifier:(id)a1 usingTextEntry:(id)a2 allowMultipleLines:(BOOL *)a3;
- (BOOL)slotTemplateView:(id)a0 shouldChangeText:(id)a1 forSlotWithIdentifier:(id)a2;
- (void)slotTemplateView:(id)a0 didChangeText:(id)a1 forSlotWithIdentifier:(id)a2;
- (void)slotTemplateView:(id)a0 typingDidCutWithOriginalBlock:(id /* block */)a1;
- (void)slotTemplateView:(id)a0 typingDidCopyWithOriginalBlock:(id /* block */)a1;
- (void)slotTemplateView:(id)a0 typingDidPasteWithOriginalBlock:(id /* block */)a1;
- (void)slotTemplateView:(id)a0 didEndTypingInSlotWithIdentifier:(id)a1;
- (void)slotTemplateView:(id)a0 deletePressedOnUnpopulatedSlotWithIdentifier:(id)a1;
- (void)slotTemplateViewDidInvalidateSize:(id)a0;
- (void)slotTemplateViewTintColorDidChange:(id)a0;
- (void)slotTemplateView:(id)a0 disclosureArrowDidChange:(BOOL)a1;
- (void)updateTemplateContentsAnimated:(BOOL)a0;
- (id)currentParameterStateForParameterKey:(id)a0;
- (Class)editorClassForParameter:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 fromContextMenuGesture:(BOOL)a1 fromTextAttachment:(id)a2;
- (id)addElementToArrayForParameterKey:(id)a0;
- (void)removeElementFromArrayAtIndex:(unsigned long long)a0 forParameterKey:(id)a1;
- (void)destroyCurrentEditor;
- (id)firstSlotIdentifierWithParameterKey:(id)a0;
- (void)startEditingForParameterKey:(id)a0;
- (id)transformParameterStateForSerialization:(id)a0 inEditor:(id)a1;
- (void)updateVariableObservationsWithContents:(id)a0;

@end
