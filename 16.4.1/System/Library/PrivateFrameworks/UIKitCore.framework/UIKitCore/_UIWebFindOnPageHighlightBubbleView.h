@interface _UIWebFindOnPageHighlightBubbleView : UIView {
    struct CGImage { } *_highlightedContent;
    struct CGPoint { double x; double y; } _highlightedContentOrigin;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)setHighlightedContent:(struct CGImage { } *)a0 withOrigin:(struct CGPoint { double x0; double x1; })a1;

@end
