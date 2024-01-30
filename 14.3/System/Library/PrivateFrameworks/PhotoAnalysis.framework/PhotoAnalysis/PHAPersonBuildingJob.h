@class NSString, NSOperationQueue, PHAPersonBuildingJobOperation;

@interface PHAPersonBuildingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAPersonBuildingJobOperationDelegate> {
    NSOperationQueue *_operationQueue;
    PHAPersonBuildingJobOperation *_personBuildingOperation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)operationDidProgress:(id)a0;
- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)a0 jobScenario:(unsigned long long)a1;
- (BOOL)startJob:(id *)a0;
- (BOOL)stopJob:(id *)a0;

@end
