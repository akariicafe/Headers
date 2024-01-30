@class NSString, UITextField, UIImageView, UILabel, UIPasscodeField;

@interface UIPrinterSetupPINView : UIControl <UITextFieldDelegate>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *enterLabel;
@property (retain, nonatomic) UIPasscodeField *passcodeField;
@property (retain, nonatomic) UITextField *textEntryField;
@property (retain, nonatomic) UILabel *failedLabel;
@property (retain, nonatomic) UIImageView *failedBackground;
@property (nonatomic) long long failedAttemptCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)PIN;
- (id)initWithPrinterName:(id)a0;
- (void)showSuccess:(BOOL)a0;
- (void)startPINInput;
- (void)stopPINInput;

@end
