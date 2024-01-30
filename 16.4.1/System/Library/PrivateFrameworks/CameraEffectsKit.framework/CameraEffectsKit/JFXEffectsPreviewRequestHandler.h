@class JFXEffectsPreviewGeneratorJob, JFXEffectsPreviewGenerationRequest;

@interface JFXEffectsPreviewRequestHandler : NSObject

@property (retain, nonatomic) JFXEffectsPreviewGenerationRequest *req;
@property (retain, nonatomic) JFXEffectsPreviewGeneratorJob *job;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (id)buildCallbackMap:(id)a0;
- (id)buildPVRenderRequestWithOutputColorSpace:(id)a0;

@end
