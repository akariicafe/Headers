@interface PHAAnalyticsJob : PHAWorkerJob

@property (nonatomic) BOOL complete;
@property (copy) id /* block */ actionBlock;

+ (id)analyticsJobWithLibrary:(id)a0 scenario:(unsigned long long)a1 actionBlock:(id /* block */)a2;

- (BOOL)finished;
- (void).cxx_destruct;
- (float)completionScore;
- (BOOL)startProcessingOnWorker:(id)a0 withError:(id *)a1;
- (BOOL)stopProcessingOnWorker:(id)a0 withError:(id *)a1;
- (void)markAsFinishedWithCompletion:(BOOL)a0;

@end
