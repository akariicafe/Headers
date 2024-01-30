@interface _UIStatusBarSignalViewCacheKey : NSObject <NSCopying> {
    Class _classType;
    struct CGSize { double width; double height; } _size;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rect;
    double _radius;
    double _lineWidth;
    struct CGSize { double width; double height; } _secondarySize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _secondaryRect;
    BOOL _alternate;
    double _scale;
}

- (id)initWithClass:(Class)a0 size:(struct CGSize { double x0; double x1; })a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 radius:(double)a3 lineWidth:(double)a4 alternate:(BOOL)a5 scale:(double)a6;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithClass:(Class)a0 size:(struct CGSize { double x0; double x1; })a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 radius:(double)a3 lineWidth:(double)a4 secondarySize:(struct CGSize { double x0; double x1; })a5 secondaryRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a6 alternate:(BOOL)a7 scale:(double)a8;
- (BOOL)isEqualToCacheKey:(id)a0;
- (unsigned long long)hash;

@end
