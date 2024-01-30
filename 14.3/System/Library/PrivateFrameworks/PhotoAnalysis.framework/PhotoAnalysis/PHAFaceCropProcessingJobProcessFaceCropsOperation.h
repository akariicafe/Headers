@class PHAVisionServiceFaceProcessingWorker, NSArray;
@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation {
    id<PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    NSArray *_faceCrops;
    unsigned long long _totalSteps;
    unsigned long long _currentStep;
}

- (void).cxx_destruct;
- (void)main;
- (float)percentComplete;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)initWithFaceProcessingWorker:(id)a0 faceCrops:(id)a1;

@end
