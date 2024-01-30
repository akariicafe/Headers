@class NSArray, PTMTLDropHints;
@protocol MTLTexture, MTLComputePipelineState;

@interface PTPyramidRGB : NSObject {
    id<MTLComputePipelineState> _gaussian3x3DownscaleRGB;
    id<MTLComputePipelineState> _bicubicDownscale;
}

@property (retain, nonatomic) id<MTLTexture> rgbaPyramid;
@property (retain, nonatomic) NSArray *rgbaPyramidArray;
@property (nonatomic) BOOL bicubic;
@property (retain, nonatomic) PTMTLDropHints *dropHints;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 colorSize:(struct CGSize { double x0; double x1; })a3 pixelFormat:(unsigned long long)a4;
- (int)updatePyramid:(id)a0 offset:(int)a1;

@end
