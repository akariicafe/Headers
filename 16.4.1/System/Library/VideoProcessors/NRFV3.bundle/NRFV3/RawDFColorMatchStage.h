@class RawDFColorMatchShaders, FigMetalContext;
@protocol MTLBuffer;

@interface RawDFColorMatchStage : NSObject {
    FigMetalContext *_metal;
    RawDFColorMatchShaders *_shaders;
    int _sampleCount;
    id<MTLBuffer> _ev0SamplesR;
    id<MTLBuffer> _ev0SamplesG;
    id<MTLBuffer> _ev0SamplesB;
    id<MTLBuffer> _evmSamplesR;
    id<MTLBuffer> _evmSamplesG;
    id<MTLBuffer> _evmSamplesB;
}

+ (int)prewarmShaders:(id)a0;
+ (void /* unknown type, empty encoding */)_getColorAdjustmentWithEvmSamples:(float *)a0 withEv0Samples:(float *)a1 sampleCount:(int)a2 scaleEv0Brightness:(float)a3;
+ (id)packColorAdjustment:(const struct { } *)a0;
+ (void)resetColorAdjustment:(struct { } *)a0;
+ (int)unpackColorAdjustment:(struct { } *)a0 fromDictionary:(id)a1;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)applyColorAdjustmentInplaceWithTexture:(id)a0 withColorAdjustment:(const struct { } *)a1;
- (int)colorMatchEvmWithLowResEv0:(id)a0 withLowResEvm:(id)a1 withEv0Homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 withEvmHomography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a3 scaleEv0Brightness:(float)a4 outputColorAdjustment:(struct { } *)a5;

@end
