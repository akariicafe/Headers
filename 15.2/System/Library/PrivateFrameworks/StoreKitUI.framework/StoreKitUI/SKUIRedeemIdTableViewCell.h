@class NSString, UITextField;
@protocol SKUIRedeemIdTableViewCellDelegate;

@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id<SKUIRedeemIdTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)setPlaceholderText:(id)a0;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)setReturnKeyType:(long long)a0;
- (void)textFieldDidChange:(id)a0;
- (void)setKeyboardType:(long long)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;
- (BOOL)textFieldShouldReturn:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)_initializeTextField;
- (void)setAutoCapitalizationType:(long long)a0;

@end
