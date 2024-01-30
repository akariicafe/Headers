@class PDFMarkupMenuButtonPrivate;

@interface PDFMarkupMenuButton : UIButton {
    PDFMarkupMenuButtonPrivate *_private;
}

- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 markupIcon:(int)a1;

@end
