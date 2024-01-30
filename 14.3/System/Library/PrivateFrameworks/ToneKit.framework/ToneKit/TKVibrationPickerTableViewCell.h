@class UIFont, NSString, UIColor, UITextField;
@protocol TKVibrationPickerTableViewCellDelegate;

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell <UITextFieldDelegate> {
    UITextField *_removableTextField;
}

@property (weak, nonatomic) id<TKVibrationPickerTableViewCellDelegate> delegate;
@property (retain, nonatomic) NSString *labelText;
@property (retain, nonatomic) NSString *placeholderText;
@property (retain, nonatomic) UIFont *regularTextFont;
@property (retain, nonatomic) UIColor *regularTextColor;
@property (retain, nonatomic) UIColor *highlightedTextColor;
@property (nonatomic, getter=isEditable) BOOL editable;
@property (nonatomic, getter=isChecked) BOOL checked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)layoutSubviews;
- (id)initWithReuseIdentifier:(id)a0;
- (void)willTransitionToState:(unsigned long long)a0;
- (void)didTransitionToState:(unsigned long long)a0;
- (void)makeTextFieldResignFirstResponderIfNeeded;
- (void)_makeRemovableTextFieldEditable:(BOOL)a0;
- (BOOL)_isDisplayingRemovableTextField;
- (void)_layoutRemovableTextField;

@end
