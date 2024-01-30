@protocol MTLLibrary, MTLDeviceSPI, MTLComputePipelineState;

@interface PTUtil : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _defaultLibrary;
    id<MTLComputePipelineState> _renderDisparity;
    id<MTLComputePipelineState> _kernelCopy;
    id<MTLComputePipelineState> _multiplyTex;
    id<MTLComputePipelineState> _reciprocal;
    id<MTLComputePipelineState> _fillWithColor;
    id<MTLComputePipelineState> _drawTurboLegend;
    id<MTLComputePipelineState> _drawTurboLegendYUV;
    id<MTLComputePipelineState> _gaussianNoise;
    id<MTLComputePipelineState> _kernelConvert420ToRGBA;
    id<MTLComputePipelineState> _kernelConvertRGBATo420;
    id<MTLComputePipelineState> _sobelFilter;
    id<MTLComputePipelineState> _bicubicResample;
    id<MTLComputePipelineState> _renderRect;
}

+ (id)findMipmapLevel:(id)a0 largerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
+ (id)temporaryDirectory:(id)a0;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;
- (int)renderRect:(id)a0 rect:(SEL)a1 color:(id)a2 fill:(BOOL)a3 outTexture:(id)a4;
- (int)copyTex:(id)a0 inTex:(id)a1 outTex:(id)a2;
- (int)renderDisparity:(id)a0 outDestLuma:(id)a1 outDestChroma:(id)a2 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 commandBuffer:(id)a4;
- (int)multiplyTex:(id)a0 inTex:(id)a1 outTex:(id)a2 multiplier:(float)a3;
- (id)precomputeNoise:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0 channels:(int)a1 seed:(long long)a2;
- (int)gaussianNoise:(id)a0 inNoise:(id)a1 outTex:(id)a2;
- (int)_drawTurboLegendTick:(id)a0 outTexture:(id)a1 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 maxValue:(float)a3;
- (int)drawTurboLegend:(id)a0 outLuma:(id)a1 outChroma:(id)a2 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 maxValue:(float)a4;
- (int)convertYUV420toRGBA:(id)a0 inColorY:(id)a1 inColorUV:(id)a2 outTexture:(id)a3;
- (int)convertRGBAtoYUV420:(id)a0 inTextureRGBA:(id)a1 outColorY:(id)a2 outColorUV:(id)a3;
- (int)reciprocalTex:(id)a0 inTex:(id)a1 outTex:(id)a2 epsilon:(float)a3;
- (int)fillWithColor:(SEL)a0 color:(id)a1 outTex:(id)a2;
- (int)drawTurboLegend:(id)a0 outRGBA:(id)a1 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 maxValue:(float)a3;
- (int)sobelFilterSingleChannelColor:(id)a0 input:(id)a1 output:(id)a2 scale:(float)a3;
- (int)bicubicResample:(id)a0 inTex:(id)a1 outTex:(id)a2;

@end
