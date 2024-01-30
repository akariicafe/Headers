@interface TSDPDFImageProvider : TSDImageProvider {
    struct CGPDFDocument { } *mPDFDocument;
    struct CGSize { double width; double height; } mNaturalSize;
}

- (struct CGSize { double x0; double x1; })naturalSize;
- (void)flush;
- (BOOL)isValid;
- (void)dealloc;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)hasFlushableContent;
- (struct CGPDFDocument { } *)CGPDFDocument;
- (struct CGPDFDocument { } *)p_load;
- (void)p_loadIfNecessary;
- (long long)pageAngle;

@end
