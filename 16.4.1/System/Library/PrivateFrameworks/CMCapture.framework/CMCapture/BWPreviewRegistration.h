@class NSObject;
@protocol OS_dispatch_queue, BWPreviewRegistrationProvider;

@interface BWPreviewRegistration : NSObject {
    NSObject<OS_dispatch_queue> *_registrationQueue;
    id<BWPreviewRegistrationProvider> _registrationProvider;
}

@property (readonly) int previewRegistrationType;

+ (void)initialize;

- (void)dealloc;
- (void)cleanupResources;
- (void)allocateResourcesAsynchronouslyWithVideoFormat:(id)a0;
- (struct CGPoint { double x0; double x1; })computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer { } *)a0 narrowerCamera:(struct opaqueCMSampleBuffer { } *)a1 widerToNarrowerCameraScale:(double)a2;
- (id)initWithCameraInfoByPortType:(id)a0 sensorBinningFactor:(struct { int x0; int x1; })a1 registrationType:(int)a2;
- (void)registerWiderCamera:(struct opaqueCMSampleBuffer { } *)a0 narrowerCamera:(struct opaqueCMSampleBuffer { } *)a1 widerToNarrowerCameraScale:(double)a2 isMacroScene:(BOOL)a3 macroTransitionType:(int)a4 completionHandler:(id /* block */)a5;
- (void)waitForRegistrationToComplete;

@end
