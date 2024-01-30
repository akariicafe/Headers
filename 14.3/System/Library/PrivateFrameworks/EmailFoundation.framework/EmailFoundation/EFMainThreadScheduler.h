@interface EFMainThreadScheduler : EFQueueScheduler

- (id)init;
- (BOOL)prefersImmediateExecution;

@end
