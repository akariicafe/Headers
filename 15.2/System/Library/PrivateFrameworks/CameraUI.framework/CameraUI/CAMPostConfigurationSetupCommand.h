@class CAMCaptureGraphConfiguration;

@interface CAMPostConfigurationSetupCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *graphConfiguration;

- (void)_configureControlCenterVideoEffectsForContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithGraphConfiguration:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
