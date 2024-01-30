@interface IPAScaleImageSizePolicy : IPAImageSizePolicy {
    double _scale;
}

- (void)encodeWithCoder:(id)a0;
- (id)initWithScale:(double)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
