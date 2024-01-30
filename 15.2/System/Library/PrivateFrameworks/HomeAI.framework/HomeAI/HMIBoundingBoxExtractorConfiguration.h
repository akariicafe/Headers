@interface HMIBoundingBoxExtractorConfiguration : HMFObject

@property (readonly) float overlapThreshold;
@property (readonly) float minBoxSizePreMerge;
@property (readonly) float maxBoxSizePreMerge;
@property (readonly) float maxBoxSizePostMerge;
@property (readonly) float minBoxSizeFinal;
@property (readonly) float maxBoxSizeFinal;
@property (readonly) float scalePreMerge;

+ (id)defaultConfiguration;

- (id)initWithOverlapThreshold:(float)a0 scalePreMerge:(float)a1 minBoxSizePreMerge:(float)a2 maxBoxSizePreMerge:(float)a3 maxBoxSizePostMerge:(float)a4 minBoxSizeFinal:(float)a5 maxBoxSizeFinal:(float)a6;

@end
