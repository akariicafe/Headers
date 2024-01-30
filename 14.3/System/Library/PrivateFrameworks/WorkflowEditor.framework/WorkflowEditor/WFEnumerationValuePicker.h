@class NSArray, NSString, WFTextTokenChooser, WFVariableSubstitutableParameterState, WFParameterValuePickerViewController, WFEnumerationParameter;

@interface WFEnumerationValuePicker : NSObject <WFParameterEventObserver, WFParameterValuePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) WFEnumerationParameter *parameter;
@property (copy, nonatomic) NSArray *parameterStates;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (retain, nonatomic) WFParameterValuePickerViewController *parameterValuePickerViewController;
@property (retain, nonatomic) WFTextTokenChooser *textTokenChooser;
@property (nonatomic) long long editingSlotArrayIndex;
@property (retain, nonatomic) WFVariableSubstitutableParameterState *currentState;
@property (copy, nonatomic) id /* block */ cancelHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)presentWithParameter:(id)a0 state:(id)a1 editingSlotArrayIndex:(long long)a2 initialCollection:(id)a3 variableProvider:(id)a4 variableUIDelegate:(id)a5 processing:(BOOL)a6 sourceView:(id)a7 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a8 viewController:(id)a9 completionHandler:(id /* block */)a10;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)updateCurrentState;
- (void)cancelOperation;
- (void)parameterAttributesDidChange:(id)a0;
- (void)updatePossibleStates;
- (void)dismissWithCompletionHandler:(id /* block */)a0;
- (void)parameterValuePickerViewController:(id)a0 didFinishWithObject:(id)a1;
- (void)parameterValuePickerViewControllerDidCancel:(id)a0;
- (void)parameterValuePickerViewControllerDidRequestRemovingItem:(id)a0;
- (id)initWithParameter:(id)a0 currentState:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateAdditionalButtons;

@end
