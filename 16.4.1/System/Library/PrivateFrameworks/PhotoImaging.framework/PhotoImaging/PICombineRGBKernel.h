@protocol MTLTexture;

@interface PICombineRGBKernel : NUComputeKernel

@property (retain, nonatomic) id<MTLTexture> redTexture;
@property (retain, nonatomic) id<MTLTexture> greenTexture;
@property (retain, nonatomic) id<MTLTexture> blueTexture;

+ (void)combineRGBTextures:(id)a0 intoDestinationTexture:(id)a1 withCommandBuffer:(id)a2;

- (void).cxx_destruct;
- (void)encodeToCommandBuffer:(id)a0 destinationTexture:(id)a1;

@end
