@interface DOCPostLaunchBuffer : DOCOperationBuffer

@property (class, readonly) DOCPostLaunchBuffer *shared;

- (void)performAfterLaunchAlwaysAsync:(BOOL)a0 block:(id /* block */)a1;
- (id)initWithLabel:(id)a0 targetQueue:(id)a1;
- (void)performAfterLaunch:(id /* block */)a0;

@end
