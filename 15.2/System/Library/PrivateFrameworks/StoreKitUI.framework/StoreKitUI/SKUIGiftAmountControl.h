@class NSString, UITextField, UIView, NSMutableArray, SKUIGiftConfiguration;

@interface SKUIGiftAmountControl : UIControl <UITextFieldDelegate> {
    NSMutableArray *_amountButtons;
    UIView *_customAmountBackgroundView;
    UITextField *_customAmountField;
    SKUIGiftConfiguration *_giftConfiguration;
    long long _selectedAmount;
    long long _trackingAmount;
}

@property (readonly, nonatomic) long long selectedAmount;
@property (readonly, nonatomic) NSString *selectedAmountString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBackgroundColor:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_textFieldDidChange:(id)a0;
- (id)initWithGiftConfiguration:(id)a0;
- (void)_textFieldDidBeginEditing:(id)a0;
- (void)_textFieldDidEndEditing:(id)a0;
- (void)_updateButtonsWithTouch:(id)a0;
- (void)_reloadSelectedButton;

@end
