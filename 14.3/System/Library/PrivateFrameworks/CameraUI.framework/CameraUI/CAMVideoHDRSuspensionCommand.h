@interface CAMVideoHDRSuspensionCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isVideoHDRSuspended) BOOL videoHDRSuspended;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithVideoHDRSuspended:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
