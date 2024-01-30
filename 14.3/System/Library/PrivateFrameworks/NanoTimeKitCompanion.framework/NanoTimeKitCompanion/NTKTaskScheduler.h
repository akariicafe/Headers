@interface NTKTaskScheduler : NSObject

- (void)cancelAllTasks;
- (id)scheduleTask:(id /* block */)a0 identifier:(id)a1;
- (void)cancelTaskForToken:(id)a0;

@end
