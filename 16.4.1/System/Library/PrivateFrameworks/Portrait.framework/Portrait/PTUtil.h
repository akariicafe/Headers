@protocol MTLLibrary, MTLDeviceSPI, MTLComputePipelineState;

@interface PTUtil : NSObject {
    id<MTLDeviceSPI> _device;
    id<MTLLibrary> _defaultLibrary;
    id<MTLComputePipelineState> _renderDisparity;
    id<MTLComputePipelineState> _kernelCopy;
    id<MTLComputePipelineState> _multiplyTex;
    id<MTLComputePipelineState> _addConstant;
    id<MTLComputePipelineState> _reciprocal;
    id<MTLComputePipelineState> _fillWithColor;
    id<MTLComputePipelineState> _drawTurboLegend;
    id<MTLComputePipelineState> _drawTurboLegendYUV;
    id<MTLComputePipelineState> _gaussianNoise;
    id<MTLComputePipelineState> _sobelFilter;
    id<MTLComputePipelineState> _renderRect;
    id<MTLComputePipelineState> _visualizeCircleUsingRect;
    id<MTLComputePipelineState> _gaussianFilter3x3;
}

+ (id)findMipmapLevel:(id)a0 largerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1;
+ (id)findMipmapLevel:(id)a0 largerThan:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a1 fromLevel:(int)a2;
+ (id)temporaryDirectory:(id)a0;

- (void).cxx_destruct;
- (int)addConstant:(id)a0 inTex:(id)a1 outTex:(id)a2 value:(float)a3;
- (int)gaussianFilter3x3:(id)a0 inRGB:(id)a1 outRGB:(id)a2;
- (int)_drawTurboLegendTick:(id)a0 outTexture:(id)a1 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 maxValue:(float)a3;
- (int)copyTex:(id)a0 inTex:(id)a1 outTex:(id)a2;
- (int)drawTurboLegend:(id)a0 outLuma:(id)a1 outChroma:(id)a2 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a3 maxValue:(float)a4;
- (int)drawTurboLegend:(id)a0 outRGBA:(id)a1 rect:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a2 maxValue:(float)a3;
- (int)fillWithColor:(SEL)a0 color:(id)a1 outTex:(id)a2;
- (int)gaussianNoise:(id)a0 inNoise:(id)a1 outTex:(id)a2;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2;
- (int)multiplyTex:(id)a0 inTex:(id)a1 outTex:(id)a2 multiplier:(float)a3;
- (int)reciprocalTex:(id)a0 inTex:(id)a1 outTex:(id)a2 epsilon:(float)a3;
- (int)renderDisparity:(id)a0 inDisparity:(id)a1 outLuma:(id)a2 outChroma:(id)a3 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a4 drawLegend:(BOOL)a5;
- (int)renderRect:(id)a0 rect:(SEL)a1 color:(id)a2 fill:(BOOL)a3 outTexture:(id)a4;
- (int)sobelFilterSingleChannelColor:(id)a0 input:(id)a1 output:(id)a2 scale:(float)a3;
- (int)visualizeCircleUsingRect:(SEL)a0 center:(id)a1 radius:(float)a2 outTexture:(id)a3;

@end
