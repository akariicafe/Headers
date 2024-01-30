@interface TSDPDFImageProvider : TSDImageProvider {
    struct CGPDFDocument { } *mPDFDocument;
    struct CGSize { double width; double height; } mNaturalSize;
}

- (struct CGSize { double x0; double x1; })naturalSize;
- (void)dealloc;
- (BOOL)isValid;
- (void)flush;
- (struct CGPDFDocument { } *)p_load;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPDFDocument { } *)CGPDFDocument;
- (BOOL)hasFlushableContent;
- (void)p_loadIfNecessary;
- (long long)pageAngle;

@end
