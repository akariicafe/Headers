@class MAProgressReporter, PHATaskHealthRecorder, NSObject, PGManager;
@protocol PHATask, OS_dispatch_queue;

@interface PHATaskWorkerJob : PHAWorkerJob {
    PGManager *_graphManager;
    PHATaskHealthRecorder *_taskHealthRecorder;
    NSObject<OS_dispatch_queue> *_executionQueue;
    MAProgressReporter *_progressReporter;
}

@property (readonly, nonatomic) id<PHATask> task;
@property (readonly) unsigned long long taskCompletionState;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) BOOL isCancelled;

+ (id)stringForTaskCompletionState:(unsigned long long)a0;
+ (id)taskProgressLoggingConnection;
+ (id)taskHealthRecorderLoggingConnection;

- (void).cxx_destruct;
- (BOOL)finished;
- (float)completionScore;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (void)markTaskAsCompleted;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 graphManager:(id)a2 task:(id)a3;

@end
