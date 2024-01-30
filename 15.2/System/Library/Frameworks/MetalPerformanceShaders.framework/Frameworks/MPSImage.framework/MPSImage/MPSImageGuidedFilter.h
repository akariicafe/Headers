@class MPSImageBox, MPSImageLanczosScale, MPSImageBilinearScale;

@interface MPSImageGuidedFilter : MPSKernel {
    MPSImageBox *_boxFilter;
    MPSImageLanczosScale *_lanczosScaler;
    MPSImageBilinearScale *_bilinearScaler;
}

@property (nonatomic) BOOL rescaleCoefficients;
@property (nonatomic) BOOL reconstructionCoefficientsSampleBicubic;
@property (readonly, nonatomic) unsigned long long kernelDiameter;
@property (nonatomic) float epsilon;
@property (nonatomic) float reconstructScale;
@property (nonatomic) float reconstructOffset;

+ (const struct MPSLibraryInfo { int x0; unsigned int x1; char *x2; void /* function */ *x3; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x4; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x5; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x6; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x7; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x8; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x9; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x10; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x11; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x12; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x13; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x14; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x15; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x16; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x17; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x18; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x19; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x20; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x21; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x22; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x23; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x24; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x25; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x26; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x27; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x28; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x29; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x30; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x31; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x32; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x33; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x34; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x35; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x36; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x37; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x38; struct MPSDeviceSpecificInfo { struct MPSKernelInfo *x0; void /* function */ *x1; unsigned long long x2; } x39; } *)libraryInfo:(void *)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithDevice:(id)a0 kernelDiameter:(unsigned long long)a1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0 device:(id)a1;
- (id)initWithCoder:(id)a0 device:(id)a1;
- (void)encodeRegressionToCommandBuffer:(id)a0 sourceTexture:(id)a1 guidanceTexture:(id)a2 weightsTexture:(id)a3 destinationCoefficientsTexture:(id)a4;
- (void)encodeReconstructionToCommandBuffer:(id)a0 guidanceTexture:(id)a1 coefficientsTexture:(id)a2 destinationTexture:(id)a3;
- (void)initFilterInfoWithDevice:(id)a0;
- (void)encodeRegressionInternalToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceTexture:(id)a2 guidanceTexture:(id)a3 weightsTexture:(id)a4 destinationCoefficientsTexture:(id)a5;
- (void)encodeRegressionToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceTexture:(id)a2 guidanceTexture:(id)a3 weightsTexture:(id)a4 destinationCoefficientsTexture:(id)a5;
- (void)encodeReconstructionInternalToCommandEncoder:(id)a0 commandBuffer:(id)a1 guidanceTexture:(id)a2 coefficientsTexture:(id)a3 destinationTexture:(id)a4;
- (void)encodeReconstructionToCommandEncoder:(id)a0 commandBuffer:(id)a1 guidanceTexture:(id)a2 coefficientsTexture:(id)a3 destinationTexture:(id)a4;
- (void)encodeRegressionInternalToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceTexture:(id)a2 guidanceTexture:(id)a3 weightsTexture:(id)a4 destinationCoefficientsTextureA:(id)a5 destinationCoefficientsTextureB:(id)a6;
- (void)encodeRegressionToCommandEncoder:(id)a0 commandBuffer:(id)a1 sourceTexture:(id)a2 guidanceTexture:(id)a3 weightsTexture:(id)a4 destinationCoefficientsTextureA:(id)a5 destinationCoefficientsTextureB:(id)a6;
- (void)encodeReconstructionInternalToCommandEncoder:(id)a0 commandBuffer:(id)a1 guidanceTexture:(id)a2 coefficientsTextureA:(id)a3 coefficientsTextureB:(id)a4 destinationTexture:(id)a5;
- (void)encodeReconstructionToCommandEncoder:(id)a0 commandBuffer:(id)a1 guidanceTexture:(id)a2 coefficientsTextureA:(id)a3 coefficientsTextureB:(id)a4 destinationTexture:(id)a5;
- (void)encodeRegressionToCommandBuffer:(id)a0 sourceTexture:(id)a1 guidanceTexture:(id)a2 weightsTexture:(id)a3 destinationCoefficientsTextureA:(id)a4 destinationCoefficientsTextureB:(id)a5;
- (void)encodeReconstructionToCommandBuffer:(id)a0 guidanceTexture:(id)a1 coefficientsTextureA:(id)a2 coefficientsTextureB:(id)a3 destinationTexture:(id)a4;

@end
