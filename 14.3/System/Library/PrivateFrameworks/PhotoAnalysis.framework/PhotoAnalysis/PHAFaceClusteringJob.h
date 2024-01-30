@class PHAVisionServiceFaceProcessingWorkerJobKeepAlive;

@interface PHAFaceClusteringJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob {
    PHAVisionServiceFaceProcessingWorkerJobKeepAlive *_keepAlive;
}

- (void).cxx_destruct;
- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)a0 jobScenario:(unsigned long long)a1;
- (BOOL)startJob:(id *)a0;
- (BOOL)stopJob:(id *)a0;
- (void)_startJobKeepAlive;
- (void)_stopJobKeepAlive;
- (void)_handleClusteringCompletion;

@end
