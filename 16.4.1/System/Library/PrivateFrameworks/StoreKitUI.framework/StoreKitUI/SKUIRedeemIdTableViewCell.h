@class NSString, UITextField;
@protocol SKUIRedeemIdTableViewCellDelegate;

@interface SKUIRedeemIdTableViewCell : UITableViewCell <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *textField;
@property (weak, nonatomic) id<SKUIRedeemIdTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setKeyboardType:(long long)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)setReturnKeyType:(long long)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)layoutSubviews;
- (BOOL)textFieldShouldClear:(id)a0;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)textFieldDidChange:(id)a0;
- (void)setPlaceholderText:(id)a0;
- (void)_initializeTextField;
- (void)setAutoCapitalizationType:(long long)a0;

@end
