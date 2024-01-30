@class CAMVideoCaptureResult, CAMStillImageCaptureRequest;

@interface CAMIrisVideoControllerJob : NSObject

@property (readonly, nonatomic) CAMStillImageCaptureRequest *request;
@property (readonly, nonatomic) CAMVideoCaptureResult *videoCaptureResult;

- (void).cxx_destruct;
- (id)initWithRequest:(id)a0 videoCaptureResult:(id)a1;

@end
