@class PDFMarkupMenuButtonPrivate;

@interface PDFMarkupMenuButton : UIButton {
    PDFMarkupMenuButtonPrivate *_private;
}

- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 markupIcon:(int)a1;

@end
