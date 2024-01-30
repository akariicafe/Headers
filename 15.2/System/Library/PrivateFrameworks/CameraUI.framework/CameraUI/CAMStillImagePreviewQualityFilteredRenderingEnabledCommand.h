@interface CAMStillImagePreviewQualityFilteredRenderingEnabledCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled;

- (void)encodeWithCoder:(id)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSubcommands:(id)a0;
- (id)initWithPreviewQualityFilteredRenderingEnabled:(BOOL)a0;

@end
