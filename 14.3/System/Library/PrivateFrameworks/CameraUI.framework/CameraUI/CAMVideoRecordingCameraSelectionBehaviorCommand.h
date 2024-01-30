@interface CAMVideoRecordingCameraSelectionBehaviorCommand : CAMCaptureCommand

@property (readonly, nonatomic, getter=_isCameraSwitchingEnabled) BOOL _cameraSwitchingEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCameraSwitchingEnabled:(BOOL)a0;

@end
