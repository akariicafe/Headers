@class PHAVisionServiceFaceProcessingWorker, PVCanceler, NSProgress;
@protocol PHAPersonBuildingJobOperationDelegate;

@interface PHAPersonBuildingJobOperation : NSOperation {
    id<PHAPersonBuildingJobOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    PVCanceler *_canceler;
    NSProgress *_progress;
    float _percentComplete;
}

- (float)percentComplete;
- (void)setDelegate:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)delegate;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)cancel;
- (id)initWithFaceProcessingWorker:(id)a0;

@end
