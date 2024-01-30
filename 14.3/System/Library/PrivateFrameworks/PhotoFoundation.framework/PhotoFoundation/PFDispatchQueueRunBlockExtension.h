@interface PFDispatchQueueRunBlockExtension : PFDispatchQueueExtension

+ (void)initialize;
+ (id)alloc;
+ (id)sharedRunBlockExtension;

- (id)initInternal;
- (id)init;
- (void)queue:(id)a0 didExecute:(id)a1;
- (id)queue:(id)a0 willTargetQueue:(id)a1;
- (void)installOnQueue:(id)a0;
- (void)queue:(id)a0 skippedExecuting:(id)a1;
- (void)queue:(id)a0 didDequeue:(id)a1 skipExecution:(id /* block */)a2;

@end
