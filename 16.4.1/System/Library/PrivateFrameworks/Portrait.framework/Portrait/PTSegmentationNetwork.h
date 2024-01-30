@class PTEffectUtil, NSString, PTUtil, PTEspressoGenericExecutor;
@protocol MTLCommandQueue, MTLDevice, MTLTexture;

@interface PTSegmentationNetwork : NSObject {
    PTEspressoGenericExecutor *_executor;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    id<MTLTexture> _inRGBA;
    id<MTLTexture> _outSkinMask;
    id<MTLTexture> _outPersonMask;
    NSString *_inRGBAName;
    PTEffectUtil *_effectUtil;
    PTUtil *_util;
}

- (void).cxx_destruct;
- (id)getMTLTextureFromCVPixelBuffer:(struct __CVBuffer { } *)a0;
- (unsigned int)executeNetwork;
- (id)inRGBA;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 effectUtil:(id)a4 util:(id)a5 sharedResources:(id)a6;
- (id)outPersonMask;
- (id)outSkinMask;

@end
