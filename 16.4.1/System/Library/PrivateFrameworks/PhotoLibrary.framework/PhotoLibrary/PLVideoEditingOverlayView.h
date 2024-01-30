@class UILabel, UITextView;

@interface PLVideoEditingOverlayView : UIView {
    UILabel *_titleLabel;
    UITextView *_bodyLabel;
}

- (void)setBody:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitle:(id)a0;

@end
