@class NSString;

@interface UITableViewCellLayoutManagerEditable1 : UITableViewCellLayoutManager <UITextFieldDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textFieldShouldReturn:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSizeForCell:(id)a0 rowWidth:(double)a1;
- (void)textFieldDidBeginEditing:(id)a0;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldBeginEditing:(id)a0;
- (id)editableTextFieldForCell:(id)a0;
- (void)layoutSubviewsOfCell:(id)a0;
- (id)detailTextLabelForCell:(id)a0;
- (double)defaultTextFieldFontSizeForCell:(id)a0;
- (void)_textValueChanged:(id)a0;
- (void)_textFieldStartEditing:(id)a0;
- (void)_textFieldEndEditing:(id)a0;
- (void)_textFieldEndEditingOnReturn:(id)a0;

@end
