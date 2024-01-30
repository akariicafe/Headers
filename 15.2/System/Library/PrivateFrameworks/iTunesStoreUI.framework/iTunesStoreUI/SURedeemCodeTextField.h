@class NSString, UIVisualEffectView, UITextField;
@protocol UITextFieldDelegate;

@interface SURedeemCodeTextField : UIView

@property (retain, nonatomic) UIVisualEffectView *visualEffectView;
@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id<UITextFieldDelegate> delegate;
@property (readonly, nonatomic) double height;
@property (retain, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSString *text;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)initWithHeight:(double)a0;
- (void)_setupSubviews;
- (void)_setupTextField;
- (void)_setupVisualEffectView;

@end
