@class PVColorSpace, JFXCapturePreviewProperties, NSObject;
@protocol OS_dispatch_queue;

@interface JFXCapturePreviewRequestBuilder : NSObject {
    NSObject<OS_dispatch_queue> *_selfieBGLoadQ;
    BOOL _logged_render_request_failure_animoji;
    BOOL _logged_render_request_failure_facetracking;
}

@property (readonly, nonatomic) PVColorSpace *outputColorSpace;
@property (readonly, nonatomic) JFXCapturePreviewProperties *previewProperties;
@property (nonatomic) struct PVTransformAnimationInfo { struct { long long value; int timescale; unsigned int flags; long long epoch; } time; struct CGPoint { double x; double y; } translation; double scale; double rotation; } requestTransformAnimation;

- (void).cxx_destruct;
- (id)JFX_getEffectsOfType:(id)a0 ofType:(int)a1;
- (id)JFX_visibleEffects:(id)a0;
- (id)createPVRenderRequestUsingAnimojiRenderer:(id)a0 metadataValidator:(id)a1 additionalTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a2 effectStack:(id)a3 animojiTapPoint:(BOOL)a4 animojiUsesInterfaceOrientation:(BOOL)a5 requestHandler:(id *)a6;
- (id)initWithPreviewProperties:(id)a0 outputColorSpace:(id)a1;

@end
