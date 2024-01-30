@interface IFConcreteImage : IFImage {
    struct CGImage { } *_CGImage;
    double _scale;
    unsigned long long _validationFlags;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
}

- (void)setValidationFlags:(unsigned long long)a0;
- (struct CGImage { } *)_CGImage;
- (unsigned long long)validationFlags;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (struct CGSize { double x0; double x1; })minimumSize;
- (struct CGSize { double x0; double x1; })size;
- (struct CGImage { } *)CGImage;
- (id)description;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (double)scale;
- (BOOL)placeholder;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setPlaceholder:(BOOL)a0;

@end
