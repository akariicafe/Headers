@interface PTRenderDebugLayer : NSObject

- (id)initWithDevice:(id)a0 library:(id)a1;
- (void)dumpDebug:(id)a0 renderRequest:(id)a1 debugTextures:(id)a2;
- (void /* unknown type, empty encoding */)getBiasedDisparityVisualizationRange:(id)a0;
- (void)renderDebugLayer:(id)a0 renderRequest:(id)a1 inDisparity:(id)a2 disparityOffset:(float)a3 focusObject:(struct PTFocus { float x0; float x1; float x2; float x3; float x4; float x5; })a4 quality:(int)a5 edgeTolerance:(float)a6 debugTextures:(id)a7 debugRendering:(long long)a8;
- (void)renderTurbo:(id)a0 inTex:(SEL)a1 outRGBA:(id)a2 valueOffset:(id)a3 valueMinMax:(id)a4 valueAbs:(float)a5 colorRangeMax:(BOOL)a6 channelMultiplier:(float)a7 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a8;
- (void)renderTurboMix:(id)a0 inTex:(SEL)a1 inRGBA:(id)a2 outRGBA:(id)a3 valueOffset:(id)a4 valueMinMax:(id)a5 valueAbs:(float)a6 colorRangeMax:(BOOL)a7 channelMultiplier:(float)a8 mixFraction:(float)a9 region:(struct { struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x0; struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; } x1; })a10;

@end
