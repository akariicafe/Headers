@class PTUtil, NSString, NSArray, PTSubjectRelighting, PTSegmentationNetwork, PTEffectUtil, PTFaceAttributesNetwork, PTMSRResize, NSObject;
@protocol OS_dispatch_queue, MTLDevice, MTLBuffer, MTLTexture, MTLComputePipelineState, MTLCommandQueue;

@interface PTSyntheticLight : NSObject {
    id<MTLComputePipelineState> _lightEstimation;
    id<MTLCommandQueue> _mainCommandQueue;
    id<MTLCommandQueue> _asyncCommandQueue;
    id<MTLDevice> _device;
    PTSegmentationNetwork *_segmentationNetwork;
    PTUtil *_util;
    PTEffectUtil *_effectUtil;
    PTMSRResize *_msrColorPyramid;
    id<MTLTexture> _skinMaskRGBA;
    struct PTSyntheticLightConfig { BOOL firstFrame; int framesSinceLightEstimate; int lightEstimateFrequency; float emaCoefficient; float fgDiffuseMinLightIntensity; float fgDiffuseMaxLightIntensity; } _config;
    NSString *_description;
    PTSubjectRelighting *_subjectRelighting;
    NSArray *_faceObservations;
    PTFaceAttributesNetwork *_faceAttributesNetwork;
    BOOL _subjectRelightingRunning;
    NSObject<OS_dispatch_queue> *srlAsyncQueue;
    struct __CVBuffer { } *_rgbaPixelBufferCopy;
    id<MTLTexture> _rgbaTextureCopy;
    id<MTLTexture> _quarterSizeLumaCopy;
    id<MTLTexture> _quarterSizeChromaCopy;
    id<MTLBuffer> _lightEstimationBuffer;
}

+ (void)disableAsynchronousWork;

- (id)debugDescription;
- (void)dealloc;
- (id)faceObservations;
- (void).cxx_destruct;
- (void)reset;
- (id)lightEstimation;
- (id)debugTextures;
- (void)estimateLightIntensity:(id)a0;
- (void)estimateLightIntensityWithFaceRects:(void *)a0 inLuma:(id)a1 inChroma:(id)a2 focusFaceIndex:(id)a3 numberOfFaceRects:(int)a4 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a5 humanDetections:(id)a6;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 faceAttributesNetwork:(id)a4 effectUtil:(id)a5 util:(id)a6 msrColorPyramid:(id)a7 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8 prewarmOnly:(BOOL)a9 sharedResources:(id)a10;
- (void)interpolateLightIntensity:(id)a0;
- (id)srlV2CoeffsBuffer;
- (void)updateSubjectRelighting:(struct __CVBuffer { } *)a0 inLuma:(id)a1 inChroma:(id)a2 inFaceRects:(struct FaceRectsWrapper { void /* unknown type, empty encoding */ x0[4]; int x1; })a3 runOnAsyncCommandQueue:(BOOL)a4 focusFaceIndex:(id)a5 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a6;

@end
