@interface CIBitmapContext : CIContext {
    struct CIBitmapContextPrivate { void *x0; long long x1; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x2; int x3; } *_bcpriv;
}

+ (id)context;
+ (id)contextWithOptions:(id)a0;
+ (id)contextWithBitmap:(void *)a0 rowBytes:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(int)a3;
+ (id)contextWithBitmap:(void *)a0 rowBytes:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(int)a3 options:(id)a4;

- (id)initWithOptions:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)init;
- (id)initWithBitmap:(void *)a0 rowBytes:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(int)a3;
- (BOOL)setBitmap:(void *)a0 rowBytes:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(int)a3;
- (id)initWithBitmap:(void *)a0 rowBytes:(long long)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 format:(int)a3 options:(id)a4;
- (void)drawImage:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)dealloc;

@end
