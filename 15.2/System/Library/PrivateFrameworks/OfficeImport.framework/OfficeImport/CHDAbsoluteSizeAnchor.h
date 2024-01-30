@interface CHDAbsoluteSizeAnchor : CHDAnchor {
    struct CGPoint { double x; double y; } mFrom;
    struct CGSize { double width; double height; } mSize;
}

- (struct CGSize { double x0; double x1; })size;
- (void)setFrom:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })from;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;

@end
