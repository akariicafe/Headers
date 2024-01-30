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
+ (id)taskHealthRecorderLoggingConnection;
+ (id)taskProgressLoggingConnection;

- (BOOL)finished;
- (void).cxx_destruct;
- (float)completionScore;
- (id)initWithWorkerType:(short)a0 scenario:(unsigned long long)a1 graphManager:(id)a2 task:(id)a3;
- (void)markTaskAsCompleted;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;

@end
