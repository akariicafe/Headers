@class PHAVisionServiceFaceProcessingWorker;

@interface PHAVisionServiceFaceProcessingWorkerAdditionalJob : PHAWorkerJob {
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    unsigned long long _jobScenario;
    BOOL _isFinished;
}

- (void)markAsFinished;
- (id)photoLibrary;
- (void).cxx_destruct;
- (BOOL)finished;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (id)initWithFaceProcessingWorker:(id)a0 jobScenario:(unsigned long long)a1;
- (BOOL)startJob:(id *)a0;
- (BOOL)stopJob:(id *)a0;
- (id)faceProcessingWorker;
- (unsigned long long)jobScenario;

@end
