@interface IPAScaleImageSizePolicy : IPAImageSizePolicy {
    double _scale;
}

- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (id)initWithScale:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
