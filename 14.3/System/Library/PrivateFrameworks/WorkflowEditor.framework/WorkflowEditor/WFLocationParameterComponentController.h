@class NSString;

@interface WFLocationParameterComponentController : CKComponentController <WFLocationPickerViewControllerDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)buttonTapped:(id)a0;
- (void)locationPicker:(id)a0 didFinishWithValue:(id)a1;
- (void)locationPickerDidCancel:(id)a0;

@end
