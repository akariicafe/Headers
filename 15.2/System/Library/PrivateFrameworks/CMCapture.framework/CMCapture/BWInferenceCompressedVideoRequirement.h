@class BWInferenceVideoRequirement;

@interface BWInferenceCompressedVideoRequirement : BWInferenceVideoRequirement

@property (readonly, nonatomic) BWInferenceVideoRequirement *uncompressedRequirement;

+ (id)newRequirementWithUncompressedRequirement:(id)a0 supportedCompressionType:(int)a1 supportedLossyCompressionLevel:(int)a2;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isSatisfiedByRequirement:(id)a0;
- (id)initWithUncompressedRequirement:(id)a0 compressedVideoFormat:(id)a1;
- (unsigned long long)satisfactionHash;

@end
