@interface ISMainThreadInvocationRecorder : ISInvocationRecorder

@property (nonatomic) BOOL waitUntilDone;

- (void)invokeInvocation:(id)a0;

@end
