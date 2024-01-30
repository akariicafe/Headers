@class H13FastLumaSharpeningShaders, FigMetalContext;

@interface H13FastLumaSharpeningStageMetal : NSObject

@property (retain, nonatomic) FigMetalContext *metal;
@property (readonly, nonatomic) H13FastLumaSharpeningShaders *shaders;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)encodeWithConfig:(const struct { BOOL x0; void /* unknown type, blank encoding */ x1; void /* unknown type, blank encoding */ x2; void /* unknown type, blank encoding */ x3; void /* unknown type, blank encoding */ x4; void /* unknown type, blank encoding */ x5; void /* unknown type, blank encoding */ x6; void /* unknown type, blank encoding */ x7; void /* unknown type, blank encoding */ x8; void /* unknown type, blank encoding */ x9[5][5]; } *)a0 inputTex:(id)a1 outputTex:(id)a2 isRGB:(BOOL)a3 sourceSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a4 destOrigin:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a5;

@end
