@interface TSDErrorImageProvider : TSDImageProvider

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (struct CGSize { double x0; double x1; })naturalSize;
- (unsigned long long)retainCount;
- (BOOL)isError;
- (id)retain;
- (id)autorelease;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)isValid;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPDFDocument { } *)p_iconPDFDocument;

@end
