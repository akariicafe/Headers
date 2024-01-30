@class CAMVideoCaptureRequest;

@interface CAMStartVideoRecordingCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMVideoCaptureRequest *_request;

- (void)executeWithContext:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithRequest:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)_videoOrientationForCaptureOrientation:(long long)a0;
- (void).cxx_destruct;

@end
