@class PHAGraphServiceWorker;

@interface PHAGraphServiceWorkerCumulativeJob : PHAGraphServiceWorkerGraphUpdateJob

@property (weak, nonatomic) PHAGraphServiceWorker *worker;

+ (id)graphUpdateJobWithLibrary:(id)a0 scenario:(unsigned long long)a1 label:(id)a2 updateBlock:(id /* block */)a3;

- (long long)executionContext;
- (void).cxx_destruct;
- (void)prepareProcessingForWorker:(id)a0;
- (void)additionalWorkAfterUpdate;

@end
