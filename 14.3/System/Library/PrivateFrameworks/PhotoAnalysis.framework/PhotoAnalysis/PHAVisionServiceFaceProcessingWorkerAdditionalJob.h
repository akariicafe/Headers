@class PHAVisionServiceFaceProcessingWorker;

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob {
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    unsigned long long _jobScenario;
    BOOL _isFinished;
}

- (BOOL)finished;
- (void).cxx_destruct;
- (id)photoLibrary;
- (void)markAsFinished;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (id)initWithFaceProcessingWorker:(id)a0 jobScenario:(unsigned long long)a1;
- (BOOL)startJob:(id *)a0;
- (BOOL)stopJob:(id *)a0;
- (id)faceProcessingWorker;
- (unsigned long long)jobScenario;

@end
