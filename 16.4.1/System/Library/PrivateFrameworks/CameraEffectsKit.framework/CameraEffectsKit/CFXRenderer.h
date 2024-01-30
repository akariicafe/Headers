@class PVLivePlayerCameraSource, NSString, PVLivePlayer, JFXPixelRotationSession, JTFrameRateCalculator, JFXMetadataValidator, JFXAnimojiEffectRenderer;
@protocol CFXRendererDelegate;

@interface CFXRenderer : NSObject <PVLivePlayerDelegate>

@property (nonatomic) long long captureMode;
@property (readonly, nonatomic) long long cameraMode;
@property (retain, nonatomic) JFXPixelRotationSession *pixelRotationSession;
@property (retain, nonatomic) JFXMetadataValidator *metadataValidator;
@property (weak, nonatomic) id<CFXRendererDelegate> delegate;
@property (retain, nonatomic) PVLivePlayer *livePlayer;
@property (readonly, nonatomic) BOOL livePlayerIsSaturated;
@property (retain, nonatomic) PVLivePlayerCameraSource *cameraSource;
@property (retain, nonatomic) JFXAnimojiEffectRenderer *animojiRenderer;
@property (readonly, nonatomic) JTFrameRateCalculator *fpsCalc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)pause;
- (void)flush;
- (void)shutdown;
- (void)dealloc;
- (void).cxx_destruct;
- (void)resume;
- (id)buildRenderRequest:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)livePlayerDroppedFrame:(int)a0 sources:(id)a1 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2;
- (void)renderRequestComplete:(id)a0 results:(id)a1 completedOutOfOrder:(BOOL)a2;
- (id)CFX_PVFrameSetFromCFXFrame:(id)a0;
- (id)CFX_getPreviewColorSpace;
- (id)CFX_JTEffectsFromCFXEffectComposition:(id)a0 forRenderTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (id)initWithDelegate:(id)a0 captureMode:(long long)a1;
- (void)renderFrame:(id)a0 effectComposition:(id)a1;
- (void)resetMetadataValidation;
- (void)setTrackingLossDelegate:(id)a0;
- (void)willDropCameraFrame;

@end
