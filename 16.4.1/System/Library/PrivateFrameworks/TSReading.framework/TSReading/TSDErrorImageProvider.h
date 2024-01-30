@interface TSDErrorImageProvider : TSDImageProvider

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;

- (id)retain;
- (struct CGSize { double x0; double x1; })naturalSize;
- (oneway void)release;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValid;
- (id)autorelease;
- (unsigned long long)retainCount;
- (BOOL)isError;
- (void)drawImageInContext:(struct CGContext { } *)a0 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGPDFDocument { } *)p_iconPDFDocument;

@end
