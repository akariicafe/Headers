@interface WDProfileEditableTableViewCell : WDProfileTableViewCell

+ (double)notEditingTrailingEdgeMargin;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)_textFieldDidChange:(id)a0;

@end
