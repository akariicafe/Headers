@class NSString, BWAdaptiveCorrectionPreviewRegistration;

@interface BWAdaptiveCorrectionPreviewRegistrationProvider : NSObject <BWPreviewRegistrationProvider> {
    BWAdaptiveCorrectionPreviewRegistration *_registration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)dealloc;
- (void)cleanupResources;
- (void)allocateResourcesWithVideoFormat:(id)a0 metalContext:(id)a1;
- (struct CGPoint { double x0; double x1; })computeCameraShiftForWiderCamera:(struct opaqueCMSampleBuffer { } *)a0 narrowerCamera:(struct opaqueCMSampleBuffer { } *)a1 widerToNarrowerCameraScale:(double)a2;
- (id)initWithCameraInfoByPortType:(id)a0;
- (struct { struct { BOOL x0; struct CGPoint { double x0; double x1; } x1; } x0[3]; })registerWiderCamera:(struct opaqueCMSampleBuffer { } *)a0 narrowerCamera:(struct opaqueCMSampleBuffer { } *)a1 widerToNarrowerCameraScale:(double)a2 isMacroScene:(BOOL)a3 macroTransitionType:(int)a4;

@end
