@class NSArray;
@protocol MTLTexture, MTLComputePipelineState;

@interface PTPyramidYUV : NSObject {
    id<MTLComputePipelineState> _gaussian3x3Downscale;
}

@property (retain, nonatomic) id<MTLTexture> lumaPyramid;
@property (retain, nonatomic) id<MTLTexture> chromaPyramid;
@property (retain, nonatomic) NSArray *lumaPyramidArray;
@property (retain, nonatomic) NSArray *chromaPyramidArray;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 pixelFormatLuma:(unsigned long long)a4 pixelFormatChroma:(unsigned long long)a5;
- (int)updatePyramid:(id)a0 offsetLuma:(int)a1 offsetChroma:(int)a2;
- (int)gaussian3x3Pyramid2Channels:(id)a0 pyramid:(id)a1 offset:(int)a2;
- (int)updatePyramidBlitEncoder:(id)a0 offsetLuma:(int)a1 offsetChroma:(int)a2;

@end
