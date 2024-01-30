@interface TSDErrorImageProvider : TSDImageProvider

@property (class, readonly, nonatomic) TSDErrorImageProvider *sharedInstance;

- (struct CGSize { double x0; double x1; })naturalSize;
- (BOOL)isValid;
- (BOOL)isError;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPDFDocument { } *)p_iconPDFDocument;

@end
