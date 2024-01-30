@interface CHDRelativeSizeAnchor : CHDAnchor {
    struct CGPoint { double x; double y; } mFrom;
    struct CGPoint { double x; double y; } mTo;
}

- (struct CGPoint { double x0; double x1; })to;
- (struct CGPoint { double x0; double x1; })from;
- (void)setTo:(struct CGPoint { double x0; double x1; })a0;
- (void)setFrom:(struct CGPoint { double x0; double x1; })a0;

@end
