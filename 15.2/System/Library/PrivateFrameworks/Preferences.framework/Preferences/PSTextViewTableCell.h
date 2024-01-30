@class NSString, PSTextView;

@interface PSTextViewTableCell : PSTableCell <UITextContentViewDelegate> {
    PSTextView *_textView;
}

@property (retain, nonatomic) PSTextView *textView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)setValue:(id)a0;
- (void)cellRemovedFromView;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)resignFirstResponder;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)textContentViewDidEndEditing:(id)a0;
- (void)textContentViewDidChange:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)_adjustTextView:(id)a0 updateTable:(BOOL)a1 withSpecifier:(id)a2;
- (void)drawTitleInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 selected:(BOOL)a1;

@end
