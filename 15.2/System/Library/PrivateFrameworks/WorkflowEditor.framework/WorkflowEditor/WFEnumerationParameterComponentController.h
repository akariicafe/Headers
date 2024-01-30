@class NSString, UISegmentedControl, WFEnumerationValuePicker;

@interface WFEnumerationParameterComponentController : CKComponentController <WFEnumerationTextTokenChooserPresenter, WFParameterValuePickerViewControllerDelegate> {
    UISegmentedControl *_segmentedControl;
    WFEnumerationValuePicker *_enumValuePicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)completeEditing;
- (void)presentTokenChooser:(id)a0;
- (void)didUpdateComponent;
- (void)willUnmount;
- (void)didUnmount;
- (void)presentValuePicker:(id)a0;
- (void)presentEnumerationValuePickerWithInitialCollection:(id)a0;
- (void)loadDynamicEnumerationValuesWithCompletionHandler:(id /* block */)a0;

@end
