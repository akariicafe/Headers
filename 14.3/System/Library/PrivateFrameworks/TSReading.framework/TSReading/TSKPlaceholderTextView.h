@class NSString, UILabel;

@interface TSKPlaceholderTextView : UITextView {
    UILabel *mPlaceholderView;
}

@property (retain, nonatomic) NSString *placeholder;

- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)becomeFirstResponder;
- (void)setTextColor:(id)a0;
- (void)dealloc;
- (void)setFont:(id)a0;
- (void)removeFromSuperview;
- (void)setTextAlignment:(long long)a0;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setText:(id)a0;
- (void)p_textDidChange:(id)a0;

@end
