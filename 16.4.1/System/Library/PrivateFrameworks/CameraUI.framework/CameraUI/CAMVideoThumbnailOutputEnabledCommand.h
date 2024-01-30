@interface CAMVideoThumbnailOutputEnabledCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isEnabled) BOOL _enabled;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithVideoThumbnailOutputEnabled:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
