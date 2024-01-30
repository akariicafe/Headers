@interface IFConcreteImage : IFImage {
    struct CGImage { } *_CGImage;
    double _scale;
    unsigned long long _validationFlags;
    struct CGSize { double width; double height; } _size;
    struct CGSize { double width; double height; } _minimumSize;
}

- (void)setPlaceholder:(BOOL)a0;
- (void)setMinimumSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGImage { } *)_CGImage;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 minimumSize:(struct CGSize { double x0; double x1; })a2 placeholder:(BOOL)a3;
- (id)initWithCGImage:(struct CGImage { } *)a0 scale:(double)a1 placeholder:(BOOL)a2;
- (struct CGImage { } *)CGImage;
- (struct CGSize { double x0; double x1; })minimumSize;
- (id)_init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)validationFlags;
- (void)setValidationFlags:(unsigned long long)a0;
- (BOOL)placeholder;
- (void)dealloc;
- (double)scale;
- (struct CGSize { double x0; double x1; })size;
- (id)description;

@end
