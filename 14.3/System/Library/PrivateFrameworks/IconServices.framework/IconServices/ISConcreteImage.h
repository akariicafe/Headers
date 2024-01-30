@interface ISConcreteImage : ISImage <NSCopying> {
    struct CGImage { } *_cgImage;
    double _scale;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
}

@property BOOL placeholder;

- (struct CGImage { } *)cgImage;
- (struct CGSize { double x0; double x1; })minimumSize;
- (double)scale;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })size;
- (id)_init;

@end
