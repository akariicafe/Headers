@class PKPickerContactFieldConfiguration, PKAddressTextField;

@interface PKAddressPickerField : UIPickerView

@property (readonly, nonatomic) PKAddressTextField *addressTextField;
@property (readonly, nonatomic) PKPickerContactFieldConfiguration *pickerFieldConfiguration;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 addressTextField:(id)a1;

@end
