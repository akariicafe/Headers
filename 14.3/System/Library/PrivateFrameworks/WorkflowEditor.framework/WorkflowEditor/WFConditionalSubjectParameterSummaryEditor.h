@class UIViewController, NSString, WFTextTokenChooser, HMHome;

@interface WFConditionalSubjectParameterSummaryEditor : WFModuleSummaryEditor <HUServicePickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) WFTextTokenChooser *chooser;
@property (weak, nonatomic) UIViewController *presentedViewController;
@property (retain, nonatomic) HMHome *home;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)servicePickerDidCancel:(id)a0;
- (void)servicePickerDidFinish:(id)a0 selectedServices:(id)a1;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)beginVariableMenuForSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (id)stateByReplacingVariableFromInitialState:(id)a0 withVariable:(id)a1;
- (void)presentHomePickerFromSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)presentServicePickerFromSourceViewController:(id)a0 home:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)presentCharacteristicPickerFromSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (id)contextHome;

@end
