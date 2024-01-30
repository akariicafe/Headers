@class CAMCaptureGraphConfiguration;

@interface CAMGraphConfigurationInspectionCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMCaptureGraphConfiguration *_knownGraphConfiguration;
@property (retain, nonatomic, setter=_setResolvedGraphConfiguration:) CAMCaptureGraphConfiguration *_resolvedGraphConfiguration;

- (id)userInfo;
- (void)encodeWithCoder:(id)a0;
- (id)initWithKnownGraphConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_resolvedVideoConfigurationFromContext:(id)a0;

@end
