@class NSArray;

@interface StocksUI.TextFieldAlertController : UIViewController {
    void /* unknown type, empty encoding */ alertTitle;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ submitTitle;
    void /* unknown type, empty encoding */ cancelTitle;
    void /* unknown type, empty encoding */ configureTextField;
    void /* unknown type, empty encoding */ onSubmit;
    void /* unknown type, empty encoding */ onCancel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_titleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_messageLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textFieldLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textField;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_submitButton;
}

@property (nonatomic, readonly) NSArray *keyCommands;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)cancel;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
