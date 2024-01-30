@class PHAVisionServiceFaceProcessingWorker, PVCanceler, NSProgress;
@protocol PHAPersonBuildingJobOperationDelegate;

@interface PHAPersonBuildingJobOperation : NSOperation {
    id<PHAPersonBuildingJobOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    PVCanceler *_canceler;
    NSProgress *_progress;
    float _percentComplete;
}

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (float)percentComplete;
- (void)setDelegate:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)delegate;
- (id)initWithFaceProcessingWorker:(id)a0;

@end
