@class BWInferenceVideoRequirement;

@interface BWInferenceCompressedVideoRequirement : BWInferenceVideoRequirement

@property (readonly, nonatomic) BWInferenceVideoRequirement *uncompressedRequirement;

+ (id)newRequirementWithUncompressedRequirement:(id)a0 supportedCompressionType:(int)a1 supportedLossyCompressionLevel:(int)a2;

- (unsigned long long)satisfactionHash;
- (BOOL)isSatisfiedByRequirement:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
