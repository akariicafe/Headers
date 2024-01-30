@interface NTKTaskScheduler : NSObject

@property double waitingPeriod;

- (id)initWithQueue:(id)a0;
- (void)cancelAllTasks;
- (void)cancelTaskForToken:(id)a0;
- (id)scheduleTask:(id /* block */)a0 identifier:(id)a1;

@end
