@class UILabel;

@interface EKPlaceholderTextView : UITextView {
    UILabel *_placeholder;
    BOOL _showingPlaceholder;
}

- (void)textChanged:(id)a0;
- (void)setPlaceholder:(id)a0;
- (void)setText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)placeholder;
- (void)dealloc;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)_placeholderLabel;
- (void)_updatePlaceholder;

@end
