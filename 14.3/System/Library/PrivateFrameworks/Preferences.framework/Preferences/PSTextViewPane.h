@class UITextView;

@interface PSTextViewPane : PSEditingPane {
    UITextView *_textView;
}

- (void).cxx_destruct;
- (void)setPreferenceSpecifier:(id)a0;
- (BOOL)handlesDoneButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;

@end
