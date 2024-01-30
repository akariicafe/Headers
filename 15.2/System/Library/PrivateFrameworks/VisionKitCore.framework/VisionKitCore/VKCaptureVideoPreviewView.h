@class CIImage, CIContext, NSObject;
@protocol OS_dispatch_queue;

@interface VKCaptureVideoPreviewView : UIImageView {
    struct opaqueCMSampleBuffer { } *_currentFrame;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
    CIContext *q_ciContext;
}

@property (readonly, nonatomic) CIImage *ciImage;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } regionOfInterest;
@property (readonly, nonatomic) double viewToImageScale;

- (double)screenScale;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (struct CGSize { double x0; double x1; })imageSize;
- (void)snapshotWithCompletion:(id /* block */)a0;
- (struct CGSize { double x0; double x1; })viewSizeInPixels;

@end
