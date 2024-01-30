@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy {
    NSArray *_policies;
}

- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithPolicies:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isBestFitPolicy;

@end
