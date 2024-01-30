@class UILabel;

@interface EKPlaceholderTextView : UITextView {
    UILabel *_placeholder;
    BOOL _showingPlaceholder;
}

- (id)placeholder;
- (void)textChanged:(id)a0;
- (void)setPlaceholder:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)_placeholderLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)_updatePlaceholder;

@end
