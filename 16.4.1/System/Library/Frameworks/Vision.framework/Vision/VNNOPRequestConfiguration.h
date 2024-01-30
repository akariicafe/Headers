@class VNSupportedImageSize;

@interface VNNOPRequestConfiguration : VNImageBasedRequestConfiguration

@property (retain, nonatomic) VNSupportedImageSize *detectorPreferredImageSize;
@property (nonatomic) BOOL detectorWantsAnisotropicScaling;
@property (nonatomic) double detectorExecutionTimeInterval;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;

@end
