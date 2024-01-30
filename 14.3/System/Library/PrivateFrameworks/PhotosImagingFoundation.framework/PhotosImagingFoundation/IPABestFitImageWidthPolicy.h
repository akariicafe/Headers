@interface IPABestFitImageWidthPolicy : IPAImageSizePolicy {
    double _fitWidth;
}

- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithWidth:(double)a0;
- (void)encodeWithCoder:(id)a0;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isBestFitPolicy;

@end
