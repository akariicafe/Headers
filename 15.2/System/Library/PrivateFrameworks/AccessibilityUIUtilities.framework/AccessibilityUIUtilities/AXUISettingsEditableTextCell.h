@class NSString, UITextField;

@interface AXUISettingsEditableTextCell : PSTableCell <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *nameTextField;
@property (nonatomic) BOOL shouldDisableTextFieldWhenNotEditing;
@property (nonatomic) BOOL shouldAllowSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)updateText;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setSelectionStyle:(long long)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityIgnoreInternalLabels;
- (void)initializeView;
- (void)markNameTextFieldAccessible;
- (id)textFieldValue:(id)a0;
- (void)setTextFieldValue:(id)a0 specifier:(id)a1;

@end
