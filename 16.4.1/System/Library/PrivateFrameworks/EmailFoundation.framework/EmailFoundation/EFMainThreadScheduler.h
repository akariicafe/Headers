@interface EFMainThreadScheduler : EFQueueScheduler

- (BOOL)prefersImmediateExecution;
- (id)init;

@end
