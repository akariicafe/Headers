@class PTColor, PTUtil;
@protocol MTLTexture, MTLDevice, MTLCommandQueue;

@interface PTMSRResize : NSObject {
    id<MTLTexture> _resultTexture;
    struct __CVBuffer *output[10];
    struct __IOSurface *outputIOSurface[10];
    int _allocatedIOSurfaces;
    struct __CFDictionary { } *_runOptions;
    id<MTLTexture> _quarterSizeLuma;
    id<MTLTexture> _quarterSizeChroma;
    struct CGColorSpace { } *_csRGBLinear;
    struct CGColorSpace { } *_csSRGB;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    PTColor *_colorUtil;
    PTUtil *_util;
    BOOL _hasMSR;
    BOOL _rotateTargetPixelBuffer;
    struct __IOSurfaceAccelerator { } *_accelRef;
    struct { int hTaps; int vTaps; int hPhases; int vPhases; int prePointBits; int postPointBits; } _cap;
}

- (void).cxx_destruct;
- (void)dealloc;
- (int)setCustomFilter:(int)a0 alignment:(int)a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 destinationWidth:(unsigned long long)a4 destinationHeight:(unsigned long long)a5 luma_param:(float)a6 chroma_param:(float)a7;
- (int)queryCapabilities;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 target:(id)a3 rotateTargetPixelBuffer:(BOOL)a4;
- (struct __CVBuffer { } *)targetRGBACVPixelBuffer;
- (unsigned int)downsampleToQuarterSize:(struct __CVBuffer { } *)a0;
- (id)quarterSizeLuma;
- (id)quarterSizeChroma;
- (id)downsampleQuarterSizeToTargetSize:(struct __CVBuffer { } *)a0;
- (int)_downsample:(struct __IOSurface { } *)a0 toDest:(struct __IOSurface { } *)a1 useCustomFilter:(BOOL)a2 centerAlignment:(BOOL)a3;
- (int)_rotate:(struct __IOSurface { } *)a0 toDest:(struct __IOSurface { } *)a1;
- (id)targetRGBA;

@end
