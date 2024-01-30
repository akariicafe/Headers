@class NSLayoutConstraint, UITextField, UIPickerView;

@interface PRXPickerContentView : PRXCardContentView {
    NSLayoutConstraint *_pickerTopConstraint;
}

@property (retain, nonatomic) UITextField *textField;
@property (readonly, nonatomic) UIPickerView *pickerView;

- (void).cxx_destruct;
- (void)updateConstraints;
- (id)initWithCardStyle:(long long)a0;

@end
