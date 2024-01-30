@interface CAMVideoHDRCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVideoHDREnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
