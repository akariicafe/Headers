@class NSArray;

@interface IPAAggregateLargestImageSizePolicy : IPAImageSizePolicy {
    NSArray *_policies;
}

- (void)encodeWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)description;
- (id)initWithPolicies:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isBestFitPolicy;

@end
