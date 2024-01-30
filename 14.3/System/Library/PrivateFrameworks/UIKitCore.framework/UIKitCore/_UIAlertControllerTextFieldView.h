@class _UIAlertControllerTextField, UITextField, NSArray, UIView;

@interface _UIAlertControllerTextFieldView : UIView {
    UIView *_containerView;
    _UIAlertControllerTextField *_textField;
    NSArray *_containerViewConstraints;
}

@property (retain, nonatomic) UIView *containerView;
@property (readonly) UITextField *textField;

- (void).cxx_destruct;
- (void)dealloc;
- (double)_borderWidth;
- (id)_textFieldFont;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_loadConstraints;

@end
