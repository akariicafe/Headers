@interface EDAbsoluteAnchor : EDAnchor {
    struct CGPoint { double x; double y; } mPosition;
    struct CGSize { double width; double height; } mSize;
}

- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })position;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })size;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;

@end
