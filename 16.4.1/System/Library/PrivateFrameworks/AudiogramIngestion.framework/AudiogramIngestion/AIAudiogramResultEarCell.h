@class UIStackView, NSString, UITextField, UILabel, NSNumber;
@protocol AIAudiogramResultEarCellDelegate;

@interface AIAudiogramResultEarCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueUnitLabel;
@property (retain, nonatomic) UITextField *valueTextField;
@property (retain, nonatomic) UIStackView *labelStackView;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (weak, nonatomic) id<AIAudiogramResultEarCellDelegate> delegate;
@property (nonatomic) long long ear;
@property (retain, nonatomic) NSNumber *frequency;
@property (retain, nonatomic) NSNumber *hearingLevel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (id)accessibilityLabel;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void).cxx_destruct;
- (void)configureLayout;
- (void)_textFieldEditingChanged:(id)a0;
- (void)setKeyboardToolbar:(id)a0;
- (void)showActive:(BOOL)a0;

@end
