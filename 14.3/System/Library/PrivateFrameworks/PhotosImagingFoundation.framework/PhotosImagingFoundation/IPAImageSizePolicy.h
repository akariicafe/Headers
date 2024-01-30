@interface IPAImageSizePolicy : NSObject <NSCoding>

+ (id)originalSizePolicy;
+ (id)scalePolicyWithScale:(double)a0;
+ (id)bestFitPolicyInSize:(struct CGSize { double x0; double x1; })a0;
+ (id)bestFitPolicyInSquare:(double)a0;
+ (id)bestFitPolicyShortestEdge:(double)a0;
+ (id)bestFitPolicyWithWidth:(double)a0;
+ (id)bestFitPolicyWithHeight:(double)a0;
+ (id)bestFitPolicyThumbnail;
+ (id)bestFitPolicyWithTotalPixelCount:(long long)a0;
+ (id)bestFitPolicyWithEvenTotalPixelCount:(long long)a0;
+ (id)bestFitPolicyWithEvenWidthTotalPixelCount:(long long)a0;
+ (id)largestPolicyWithPolicies:(id)a0;
+ (id)bestFitPolicyWithNominalShortSide:(long long)a0 minLongSide:(long long)a1 maxLongSide:(long long)a2;

- (struct CGSize { double x0; double x1; })transformSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (struct PFIntSize_st { unsigned long long x0; unsigned long long x1; })integralTransformSize:(struct CGSize { double x0; double x1; })a0;
- (double)transformScaleForSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isBestFitPolicy;
- (BOOL)isOriginalSizePolicy;

@end
