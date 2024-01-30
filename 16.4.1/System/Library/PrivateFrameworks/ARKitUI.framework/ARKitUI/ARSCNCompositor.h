@class ARMatteGenerator, ARFrame, ARSCNView, SCNTechnique;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLRenderPipelineState;

@interface ARSCNCompositor : NSObject {
    id<MTLDevice> _device;
    ARSCNView *_view;
    SCNTechnique *_technique;
    ARMatteGenerator *_matteGenerator;
    id<MTLLibrary> _mattingLibrary;
    id<MTLRenderPipelineState> _resampleML;
    id<MTLRenderPipelineState> _resampleDepthML;
    struct CGSize { double width; double height; } _workingResolution;
    float _workingScaleFactor;
    float _mattingScaleFactor;
    BOOL _disableReverseZ;
}

@property (retain, nonatomic) ARFrame *currentFrame;
@property (readonly, nonatomic) long long mode;
@property (nonatomic) long long compositorAlgorithm;
@property (nonatomic) unsigned long long foregroundBitMask;
@property (nonatomic) long long currentOrientation;
@property (nonatomic) struct CGSize { double width; double height; } currentSize;
@property (nonatomic) BOOL showOcclusionGeometry;
@property (nonatomic) unsigned long long uncertaintyRadius;
@property (nonatomic) unsigned long long erosionRadius;
@property (nonatomic) double depthScale;
@property (nonatomic) unsigned long long dilationRadius;
@property (nonatomic) double filterEpsilon;
@property (nonatomic) double filterScale;
@property (nonatomic) double filterOffset;
@property (readonly, nonatomic) id<MTLTexture> alphaTexture;

+ (id)mattingTechniqueDual;
+ (id)mattingWithDepthAndDualTechnique;
+ (id)techniqueDictionaryWithName:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (struct { void /* unknown type, empty encoding */ x0[4]; })orientedVerticesWithResolution:(struct CGSize { double x0; double x1; })a0;
- (void)encodeAlphaResampleToCommandBuffer:(id)a0 resolution:(struct CGSize { double x0; double x1; })a1 input:(id)a2 output:(id)a3;
- (void)encodeDepthResampleToCommandBuffer:(id)a0 resolution:(struct CGSize { double x0; double x1; })a1 input:(id)a2 output:(id)a3;
- (void)executeOcclusionDepthStencilCallback:(id)a0;
- (void)executeOverlayMatteCallbackDual:(id)a0;
- (id)initWithView:(id)a0 mode:(long long)a1 algorithm:(long long)a2;

@end
