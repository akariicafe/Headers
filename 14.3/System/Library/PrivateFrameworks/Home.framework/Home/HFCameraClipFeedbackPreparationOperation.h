@class HMCameraClip;

@interface HFCameraClipFeedbackPreparationOperation : NSOperation

@property (retain, nonatomic) HMCameraClip *cameraClip;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithCameraClip:(id)a0 completionHandler:(id /* block */)a1;
- (void)main;

@end
