@class PHAVisionServiceFaceProcessingWorker, NSProgress, NSObject;
@protocol OS_dispatch_queue;

@interface PHAContactClassificationJob : PHAWorkerJob

@property (retain, nonatomic) PHAVisionServiceFaceProcessingWorker *faceProcessingWorker;
@property (nonatomic) unsigned long long jobScenario;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSProgress *progress;
@property (nonatomic) BOOL done;

- (void).cxx_destruct;
- (BOOL)finished;
- (float)completionScore;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (id)initWithFaceProcessingWorker:(id)a0 jobScenario:(unsigned long long)a1;

@end
