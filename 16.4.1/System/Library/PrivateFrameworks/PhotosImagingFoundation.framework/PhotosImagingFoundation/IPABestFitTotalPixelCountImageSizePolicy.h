@interface IPABestFitTotalPixelCountImageSizePolicy : IPAImageSizePolicy {
    long long _totalPixelCount;
}

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isBestFitPolicy;
- (struct CGSize { double x0; double x1; })_transformSize:(struct CGSize { double x0; double x1; })a0 scale:(double *)a1;
- (id)initWithTotalPixelCount:(long long)a0;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;

@end
