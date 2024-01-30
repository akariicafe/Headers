@class PHAVisionServiceFaceProcessingWorker, NSArray;
@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation {
    id<PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    NSArray *_faceCrops;
    unsigned long long _totalSteps;
    unsigned long long _currentStep;
}

- (float)percentComplete;
- (void)setDelegate:(id)a0;
- (void)main;
- (void).cxx_destruct;
- (id)delegate;
- (id)initWithFaceProcessingWorker:(id)a0 faceCrops:(id)a1;

@end
