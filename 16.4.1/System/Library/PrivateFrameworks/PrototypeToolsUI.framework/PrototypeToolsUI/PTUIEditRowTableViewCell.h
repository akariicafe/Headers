@class NSString;

@interface PTUIEditRowTableViewCell : PTUIRowTableViewCell <PTUINumericKeypadDelegate, UITextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)cellStyleForRow:(id)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)updateDisplayedValue;
- (void)numericKeypadDidUpdateValue:(id)a0;
- (void)numericKeypadWillDismiss:(id)a0;
- (id)textForValue:(id)a0;
- (id)valueForText:(id)a0;

@end
