@class UILabel, UIButton, NSArray;

@interface HKTitleDetailOptionalButtonView : UIView {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_button;
    id /* block */ _buttonAction;
    NSArray *_buttonPresentConstraints;
    NSArray *_buttonOmittedConstraints;
}

- (void)setUp;
- (id)init;
- (void).cxx_destruct;
- (id)_buttonConfigurationWithButtonTitle:(id)a0;
- (void)buttonTapped;
- (void)populateWithTitle:(id)a0 detail:(id)a1 buttonText:(id)a2 buttonAction:(id /* block */)a3;

@end
