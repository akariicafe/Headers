@class CAMCaptureGraphConfiguration;

@interface CAMPostConfigurationSetupCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *graphConfiguration;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithGraphConfiguration:(id)a0;
- (void)_configureVideoGreenGhostMitigationForContext:(id)a0;
- (void)_configureControlCenterVideoEffectsForContext:(id)a0;
- (void)_configureSmoothZoomingForContext:(id)a0;
- (void)_configureLivePhotoPreservationSuspension:(id)a0;
- (void).cxx_destruct;

@end
