@class CAMStillImageCaptureRequest;

@interface CAMStillImageCaptureCommand : CAMCaptureCommand

@property (readonly, nonatomic) CAMStillImageCaptureRequest *_request;

- (id)initWithRequest:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)_videoOrientationForCaptureOrientation:(long long)a0;
- (void).cxx_destruct;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_sanitizeCapturePhotoSettings:(id)a0 withContext:(id)a1;

@end
