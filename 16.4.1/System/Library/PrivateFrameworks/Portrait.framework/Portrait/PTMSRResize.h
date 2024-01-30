@class NSArray, PTColor, PTUtil;
@protocol MTLCommandQueue, MTLDevice;

@interface PTMSRResize : NSObject {
    struct __CVBuffer *_outputPixelbuffer[10];
    struct __IOSurface *_outputIOSurface[10];
    NSArray *_pyramidRGBA;
    int _allocatedIOSurfaces;
    struct __CFDictionary { } *_runOptions;
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

- (int)setCustomFilter:(int)a0 alignment:(int)a1 sourceWidth:(unsigned long long)a2 sourceHeight:(unsigned long long)a3 destinationWidth:(unsigned long long)a4 destinationHeight:(unsigned long long)a5 luma_param:(float)a6 chroma_param:(float)a7;
- (void)dealloc;
- (int)queryCapabilities;
- (void).cxx_destruct;
- (int)_downsample:(struct __IOSurface { } *)a0 toDest:(struct __IOSurface { } *)a1 useCustomFilter:(BOOL)a2 centerAlignment:(BOOL)a3 synchronous:(BOOL)a4;
- (int)_rotate:(struct __IOSurface { } *)a0 toDest:(struct __IOSurface { } *)a1 synchronous:(BOOL)a2;
- (unsigned int)downsampleQuarterSizeToTargetSize:(struct __CVBuffer { } *)a0;
- (int)downsampleToLayer:(int)a0;
- (unsigned int)downsampleToQuarterSize:(struct __CVBuffer { } *)a0;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 inputSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 target:(id)a3 rotateTargetPixelBuffer:(BOOL)a4 sharedResources:(id)a5;
- (id)pyramidRGBA;
- (unsigned int)rotate:(SEL)a0 crop:(struct __IOSurface { } *)a1 rotationDegree:(int)a2 toDest:(struct __IOSurface { } *)a3 synchronous:(BOOL)a4;
- (id)targetRGBA;
- (struct __CVBuffer { } *)targetRGBAPixelBuffer;

@end
