@class NSString, UITextField;

@interface AXUISettingsEditableTextCell : PSTableCell <UITextFieldDelegate>

@property (retain, nonatomic) UITextField *nameTextField;
@property (nonatomic) BOOL shouldDisableTextFieldWhenNotEditing;
@property (nonatomic) BOOL shouldAllowSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void).cxx_destruct;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)textFieldDidEndEditing:(id)a0;
- (void)initializeView;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)updateText;
- (void)setSelectionStyle:(long long)a0;
- (void)layoutSubviews;
- (id)textFieldValue:(id)a0;
- (void)markNameTextFieldAccessible;
- (void)setTextFieldValue:(id)a0 specifier:(id)a1;
- (BOOL)_accessibilityIgnoreInternalLabels;

@end
