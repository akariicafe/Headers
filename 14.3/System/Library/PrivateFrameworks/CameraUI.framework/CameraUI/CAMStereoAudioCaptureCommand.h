@interface CAMStereoAudioCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=isStereoAudioCaptureEnabled) BOOL stereoAudioCaptureEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStereoAudioCaptureEnabled:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;

@end
