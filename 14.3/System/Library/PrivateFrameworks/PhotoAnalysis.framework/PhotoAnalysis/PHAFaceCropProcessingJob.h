@class NSString, NSOperationQueue, PHAFaceCropProcessingJobProcessFaceCropsOperation;

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> {
    NSOperationQueue *_operationQueue;
    PHAFaceCropProcessingJobProcessFaceCropsOperation *_processingOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (float)completionScore;
- (BOOL)startJob:(id *)a0;
- (BOOL)stopJob:(id *)a0;
- (void)operation:(id)a0 didProcessFaceCrop:(id)a1 withError:(id)a2;
- (id)initWithFaceProcessingWorker:(id)a0 jobScenario:(unsigned long long)a1 dirtyFaceCrops:(id)a2;

@end
