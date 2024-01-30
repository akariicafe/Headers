@interface IPABestFitShortSideWithLongSideLimit : IPAImageSizePolicy {
    long long _nominalShortSide;
    long long _minLongSide;
    long long _maxLongSide;
}

- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isBestFitPolicy;
- (id)initWithNominalShortSide:(long long)a0 minLongSide:(long long)a1 maxLongSide:(long long)a2;

@end
