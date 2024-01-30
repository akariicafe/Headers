@interface TSDErrorImageProvider : TSDImageProvider

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;
+ (id)_singletonAlloc;

- (struct CGSize { double x0; double x1; })naturalSize;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (unsigned long long)retainCount;
- (BOOL)isValid;
- (BOOL)isError;
- (id)retain;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPDFDocument { } *)p_iconPDFDocument;

@end
