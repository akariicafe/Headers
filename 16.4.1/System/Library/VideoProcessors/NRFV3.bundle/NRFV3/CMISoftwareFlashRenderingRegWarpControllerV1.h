@class CMIWarpStage, FigRegWarpPPGPU, FigMetalContext;
@protocol MTLTexture;

@interface CMISoftwareFlashRenderingRegWarpControllerV1 : NSObject {
    FigMetalContext *_metalContext;
    FigRegWarpPPGPU *_regWarpGPU;
    CMIWarpStage *_warpStage;
    int _regWarpProcessingType;
    struct { void /* unknown type, empty encoding */ columns[3]; } _homography;
}

@property (retain, nonatomic) id<MTLTexture> referenceInput;
@property (retain, nonatomic) id<MTLTexture> nonReferenceInput;
@property (retain, nonatomic) id<MTLTexture> warpInput;
@property (retain, nonatomic) id<MTLTexture> warpedOutput;

- (int)prepareToProcess:(int)a0;
- (void)dealloc;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)runRegistration;
- (int)runWarp;

@end
