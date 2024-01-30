@class WFSlotIdentifier, NSString, WFEnumerationValuePicker;

@interface WFEnumerationParameterSummaryEditor : WFModuleSummaryEditor <UIPopoverPresentationControllerDelegate>

@property (retain, nonatomic) WFEnumerationValuePicker *valuePicker;
@property (retain, nonatomic) WFSlotIdentifier *editingSlotIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)variableResultTypeForParameter:(id)a0;

- (void).cxx_destruct;
- (void)beginEditingSlotWithIdentifier:(id)a0 sourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)cancelEditingWithCompletionHandler:(id /* block */)a0;
- (void)completeEditing;
- (void)beginEditingNewArrayElementFromSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)loadDynamicEnumerationValuesWithCompletionHandler:(id /* block */)a0;
- (void)loadCustomIntentDynamicEnumerationValuesWithCompletionHandler:(id /* block */)a0;
- (void)presentEnumValuePickerWithSourceViewController:(id)a0 sourceView:(id)a1 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)presentCustomIntentDynamicEnumerationForSlotIdentifier:(id)a0 fromSourceViewController:(id)a1 sourceView:(id)a2 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)presentEnumerationValuePickerForSlotIdentifier:(id)a0 initialCollection:(id)a1 fromSourceViewController:(id)a2 sourceView:(id)a3 sourceRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4;

@end
