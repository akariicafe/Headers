@class NSString, PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate> {
    PSTextView *_textView;
}

@property (retain, nonatomic) PSTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (BOOL)becomeFirstResponder;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void).cxx_destruct;
- (void)setValue:(id)a0;
- (void)textContentViewDidChange:(id)a0;
- (void)textContentViewDidEndEditing:(id)a0;
- (void)_adjustTextView:(id)a0 updateTable:(BOOL)a1 withSpecifier:(id)a2;
- (void)cellRemovedFromView;
- (void)drawTitleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1;

@end
