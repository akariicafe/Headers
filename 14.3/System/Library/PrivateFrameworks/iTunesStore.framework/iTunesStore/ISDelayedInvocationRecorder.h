@interface ISDelayedInvocationRecorder : ISInvocationRecorder

@property (nonatomic) double delayInterval;

- (void)invokeInvocation:(id)a0;

@end
