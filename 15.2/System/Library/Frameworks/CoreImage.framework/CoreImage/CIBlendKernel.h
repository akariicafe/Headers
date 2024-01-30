@interface CIBlendKernel : CIColorKernel

@property (class, readonly) CIBlendKernel *componentAdd;
@property (class, readonly) CIBlendKernel *componentMultiply;
@property (class, readonly) CIBlendKernel *componentMin;
@property (class, readonly) CIBlendKernel *componentMax;
@property (class, readonly) CIBlendKernel *clear;
@property (class, readonly) CIBlendKernel *source;
@property (class, readonly) CIBlendKernel *destination;
@property (class, readonly) CIBlendKernel *sourceOver;
@property (class, readonly) CIBlendKernel *destinationOver;
@property (class, readonly) CIBlendKernel *sourceIn;
@property (class, readonly) CIBlendKernel *destinationIn;
@property (class, readonly) CIBlendKernel *sourceOut;
@property (class, readonly) CIBlendKernel *destinationOut;
@property (class, readonly) CIBlendKernel *sourceAtop;
@property (class, readonly) CIBlendKernel *destinationAtop;
@property (class, readonly) CIBlendKernel *exclusiveOr;
@property (class, readonly) CIBlendKernel *multiply;
@property (class, readonly) CIBlendKernel *screen;
@property (class, readonly) CIBlendKernel *overlay;
@property (class, readonly) CIBlendKernel *darken;
@property (class, readonly) CIBlendKernel *lighten;
@property (class, readonly) CIBlendKernel *colorDodge;
@property (class, readonly) CIBlendKernel *colorBurn;
@property (class, readonly) CIBlendKernel *hardLight;
@property (class, readonly) CIBlendKernel *softLight;
@property (class, readonly) CIBlendKernel *difference;
@property (class, readonly) CIBlendKernel *exclusion;
@property (class, readonly) CIBlendKernel *hue;
@property (class, readonly) CIBlendKernel *saturation;
@property (class, readonly) CIBlendKernel *color;
@property (class, readonly) CIBlendKernel *luminosity;
@property (class, readonly) CIBlendKernel *subtract;
@property (class, readonly) CIBlendKernel *divide;
@property (class, readonly) CIBlendKernel *linearBurn;
@property (class, readonly) CIBlendKernel *linearDodge;
@property (class, readonly) CIBlendKernel *vividLight;
@property (class, readonly) CIBlendKernel *linearLight;
@property (class, readonly) CIBlendKernel *pinLight;
@property (class, readonly) CIBlendKernel *hardMix;
@property (class, readonly) CIBlendKernel *darkerColor;
@property (class, readonly) CIBlendKernel *lighterColor;

+ (id)cachedKernelWithString:(id)a0 extentType:(int)a1;
+ (id)plusLighter;
+ (id)kernelWithString:(id)a0;
+ (id)kernelWithString:(id)a0 extentType:(int)a1;
+ (id)plusDarker;

- (id)initWithString:(id)a0;
- (BOOL)getBlendBehaviorBit:(int)a0;
- (void)setIsClearIfBackIsClear:(BOOL)a0;
- (void)setIsForeIfBackIsClear:(BOOL)a0;
- (void)setIsBackIfForeIsClear:(BOOL)a0;
- (id)applyWithForeground:(id)a0 background:(id)a1;
- (void)setBlendBehaviorBit:(int)a0 value:(BOOL)a1;
- (void)setIsClearIfForeIsClear:(BOOL)a0;
- (BOOL)isBackIfForeIsClear;
- (BOOL)isForeIfBackIsClear;
- (id)applyWithForeground:(id)a0 background:(id)a1 colorSpace:(struct CGColorSpace { } *)a2;
- (id)initWithString:(id)a0 extentType:(int)a1;
- (BOOL)isClearIfForeIsClear;
- (BOOL)isClearIfBackIsClear;

@end
