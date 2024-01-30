@interface CAMVideoStabilizationCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled;

- (void)encodeWithCoder:(id)a0;
- (id)initWithAutomaticVideoStabilizationEnabled:(BOOL)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
