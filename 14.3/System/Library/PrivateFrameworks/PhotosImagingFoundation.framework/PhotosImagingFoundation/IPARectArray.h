@interface IPARectArray : NSObject <NSCopying, NSMutableCopying> {
    struct RectArray { struct Rect *x0; struct Rect *x1; struct __compressed_pair<PA::Rect *, std::__1::allocator<PA::Rect> > { struct Rect *x0; } x2; } *_imp;
}

+ (id)rectArray;
+ (id)rectArrayWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (BOOL)isEmpty;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectAtIndex:(unsigned long long)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)count;
- (void)enumerateRects:(id /* block */)a0;
- (id)initWithRectArray:(id)a0;

@end
