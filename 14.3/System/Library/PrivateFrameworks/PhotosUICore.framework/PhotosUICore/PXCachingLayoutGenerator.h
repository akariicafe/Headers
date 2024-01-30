@interface PXCachingLayoutGenerator : PXLayoutGenerator {
    BOOL _isValid;
    struct CGSize { double width; double height; } _contentSize;
    struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *_itemRects;
    long long *_itemKinds;
    long long _itemCapacity;
}

- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x0; struct CGPoint { double x0; double x1; } x1; struct CGSize { double x0; double x1; } x2; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x3; float x4; long long x5; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x6; struct CGSize { double x0; double x1; } x7; } *)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 withKind:(long long)a2;
- (void)_updateIfNeeded;
- (void)updateContentSize:(out struct CGSize { double x0; double x1; } *)a0 itemRects:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1 itemKinds:(out long long *)a2;
- (void)updateContentSize:(out struct CGSize { double x0; double x1; } *)a0 itemRects:(out struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)invalidate;

@end
