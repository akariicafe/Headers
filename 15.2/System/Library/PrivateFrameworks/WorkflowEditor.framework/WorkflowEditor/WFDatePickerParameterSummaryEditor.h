@class NSString, WFVariableInputCoordinator, WFNonViewResponder, UIDatePicker, UIView, UIViewController;

@interface WFDatePickerParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate, WFNonViewResponderDelegate, WFVariableUIDelegate>

@property (weak, nonatomic) UIViewController *presentedViewController;
@property (weak, nonatomic) UIView *sourceView;
@property (retain, nonatomic) UIDatePicker *datePicker;
@property (retain, nonatomic) WFNonViewResponder *datePickerResponder;
@property (retain, nonatomic) WFVariableInputCoordinator *variableCoordinator;
@property (nonatomic) BOOL isPickingMagicVariable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (void).cxx_destruct;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void)datePickerValueChanged:(id)a0;
- (void)setVariableProvider:(id)a0;
- (void)beginEditingSlotWithIdentifier:(id)a0 presentationAnchor:(id)a1;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)showActionOutputPickerFromSourceResponder:(id)a0 allowShortcutInput:(BOOL)a1 variableProvider:(id)a2 completionHandler:(id /* block */)a3;
- (void)revealAction:(id)a0 fromSourceView:(id)a1 preScrollHandler:(id /* block */)a2 goBackHandler:(id /* block */)a3 scrolledAwayHandler:(id /* block */)a4;
- (void)setVariableUIDelegate:(id)a0;
- (void)sourceViewTintColorDidChange;
- (void)responderWillResign:(id)a0;

@end
