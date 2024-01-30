@class ADEspressoRunner, NSString, PTEffectUtil, PTUtil, PTEspressoGenericExecutor;
@protocol MTLCommandQueue, MTLDevice, MTLTexture;

@interface PTRenderEffectNetwork : NSObject {
    PTEspressoGenericExecutor *_executor;
    NSString *_reinjectDisparity;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    ADEspressoRunner *_espressoRunner;
    struct __CVBuffer { } *_inRGBAAppleDepthRunner;
    struct __CVBuffer { } *_outDisparityAppleDepthRunner;
    struct __CVBuffer { } *_inTemporalDisparityAppleDepthRunner;
    id<MTLTexture> _inRGBA;
    id<MTLTexture> _inRGBARotated;
    id<MTLTexture> _inTemporalDisparity;
    id<MTLTexture> _outDisparity;
    id<MTLTexture> _outDisparityRotated;
    struct __CVBuffer { } *_inputPixelBuffer;
    NSString *_inRGBAName;
    PTEffectUtil *_effectUtil;
    PTUtil *_util;
    BOOL _hasANE;
}

@property long long frameIndex;

- (BOOL)rotated;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)initWithDevice:(id)a0 commandQueue:(id)a1 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a2 effectUtil:(id)a3 util:(id)a4;
- (id)outDisparity;
- (id)inRGBA;
- (void)bindColorInputResource:(struct __CVBuffer { } *)a0;
- (unsigned int)executeNetwork;
- (unsigned long long)getLayoutFromSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a0;
- (id)getMTLTextureFromCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (void)dumpNetworkInputWithDefaults:(id)a0;
- (void)dumpNetworkOutputWithDefaults:(id)a0;

@end
