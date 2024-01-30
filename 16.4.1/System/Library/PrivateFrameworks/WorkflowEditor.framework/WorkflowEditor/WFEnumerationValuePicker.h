@class WFSlotIdentifier, NSString, WFVariableSubstitutableParameterState, WFParameterValuePickerViewController, WFEnumerationParameter;

@interface WFEnumerationValuePicker : NSObject <WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) WFEnumerationParameter *parameter;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFParameterValuePickerViewController *parameterValuePickerViewController;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (retain, nonatomic) WFSlotIdentifier *slotIdentifier;
@property (readonly, nonatomic) long long editingSlotArrayIndex;
@property (nonatomic) BOOL suppressAutomaticCancellation;
@property (retain, nonatomic) WFVariableSubstitutableParameterState *currentState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentWithParameter:(id)a0 state:(id)a1 slotIdentifier:(id)a2 initialCollection:(id)a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 allowsPickingVariables:(BOOL)a6 processing:(BOOL)a7 presentationAnchor:(id)a8 cancelHandler:(id /* block */)a9 completionHandler:(id /* block */)a10;

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)dismissWithCompletionHandler:(id /* block */)a0;
- (void)parameterValuePickerViewController:(id)a0 didFinishWithParameterState:(id)a1;
- (void)cancelOperationCommittingState:(BOOL)a0;
- (void)cancelOperationAndCommitState;
- (id)initWithParameter:(id)a0 currentState:(id)a1 completionHandler:(id /* block */)a2;
- (void)parameterValuePickerViewControllerDidCancel:(id)a0;
- (void)parameterValuePickerViewControllerDidRequestRemovingItem:(id)a0;
- (void)parameterValuePickingDidClear;
- (void)parameterValuePickingDidFinishWithParameterState:(id)a0;

@end
