@interface CAMPausePairedVideoRecordingCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isRecordingPaused) BOOL _recordingPaused;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRecordingPaused:(BOOL)a0;

@end
