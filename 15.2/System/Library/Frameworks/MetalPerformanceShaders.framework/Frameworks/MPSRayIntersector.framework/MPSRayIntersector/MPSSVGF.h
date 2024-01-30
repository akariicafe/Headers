@interface MPSSVGF : MPSKernel <NSSecureCoding, NSCopying> {
    float _variancePrefilterSigma;
    float _bilateralFilterSigma;
    unsigned long long _temporalWeighting;
    float _temporalReprojectionBlendFactor;
    float _depthWeight;
    float _normalWeight;
    float _luminanceWeight;
    float _reprojectionThreshold;
    float _varianceEstimationSigma;
    unsigned long long _channelCount;
    unsigned long long _channelCount2;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) float depthWeight;
@property (nonatomic) float normalWeight;
@property (nonatomic) float luminanceWeight;
@property (nonatomic) unsigned long long temporalWeighting;
@property (nonatomic) float temporalReprojectionBlendFactor;
@property (nonatomic) float reprojectionThreshold;
@property (nonatomic) unsigned long long minimumFramesForVarianceEstimation;
@property (nonatomic) unsigned long long varianceEstimationRadius;
@property (nonatomic) float varianceEstimationSigma;
@property (nonatomic) float variancePrefilterSigma;
@property (nonatomic) unsigned long long variancePrefilterRadius;
@property (nonatomic) float bilateralFilterSigma;
@property (nonatomic) unsigned long long bilateralFilterRadius;
@property (nonatomic) unsigned long long channelCount;
@property (nonatomic) unsigned long long channelCount2;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; } *)libraryInfo:(void *)a0;

- (id)initWithDevice:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (struct MPSSVGFParams { float x0; float x1; float x2; float x3; float x4; unsigned int x5; float x6; float x7; float x8; })params;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (struct MPSSVGFFunctionHash { union { struct { unsigned char x0 : 2; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 2; unsigned char x6 : 2; unsigned long x7 : 55; } x0; unsigned long long x1; } x0; unsigned int x1; unsigned int x2; unsigned int x3; })getHashForKernelID:(unsigned long long)a0 haveMotionVectorTexture:(BOOL)a1 haveDepthNormalTexture:(BOOL)a2 haveSecondTexture:(BOOL)a3;
- (void)encodeReprojectionToCommandBuffer:(id)a0 sourceTexture:(id)a1 previousTexture:(id)a2 destinationTexture:(id)a3 previousLuminanceMomentsTexture:(id)a4 destinationLuminanceMomentsTexture:(id)a5 sourceTexture2:(id)a6 previousTexture2:(id)a7 destinationTexture2:(id)a8 previousLuminanceMomentsTexture2:(id)a9 destinationLuminanceMomentsTexture2:(id)a10 previousFrameCountTexture:(id)a11 destinationFrameCountTexture:(id)a12 motionVectorTexture:(id)a13 depthNormalTexture:(id)a14 previousDepthNormalTexture:(id)a15;
- (unsigned long long)channelCount:(id)a0;
- (id)getPipelineForFunctionName:(id)a0 kernelID:(unsigned long long)a1 haveMotionVectorTexture:(BOOL)a2 haveDepthNormalTexture:(BOOL)a3 haveSecondTexture:(BOOL)a4;
- (void)encodeVarianceEstimationToCommandBuffer:(id)a0 sourceTexture:(id)a1 luminanceMomentsTexture:(id)a2 destinationTexture:(id)a3 sourceTexture2:(id)a4 luminanceMomentsTexture2:(id)a5 destinationTexture2:(id)a6 frameCountTexture:(id)a7 depthNormalTexture:(id)a8;
- (void)encodeBilateralFilterToCommandBuffer:(id)a0 stepDistance:(unsigned long long)a1 sourceTexture:(id)a2 destinationTexture:(id)a3 sourceTexture2:(id)a4 destinationTexture2:(id)a5 depthNormalTexture:(id)a6;
- (void)encodeReprojectionToCommandBuffer:(id)a0 sourceTexture:(id)a1 previousTexture:(id)a2 destinationTexture:(id)a3 previousLuminanceMomentsTexture:(id)a4 destinationLuminanceMomentsTexture:(id)a5 previousFrameCountTexture:(id)a6 destinationFrameCountTexture:(id)a7 motionVectorTexture:(id)a8 depthNormalTexture:(id)a9 previousDepthNormalTexture:(id)a10;
- (void)encodeVarianceEstimationToCommandBuffer:(id)a0 sourceTexture:(id)a1 luminanceMomentsTexture:(id)a2 destinationTexture:(id)a3 frameCountTexture:(id)a4 depthNormalTexture:(id)a5;
- (void)encodeBilateralFilterToCommandBuffer:(id)a0 stepDistance:(unsigned long long)a1 sourceTexture:(id)a2 destinationTexture:(id)a3 depthNormalTexture:(id)a4;

@end
