@interface QLAsynchronousOperation : NSOperation

@property (nonatomic, getter=isExecuting) BOOL executing;
@property (nonatomic, getter=isFinished) BOOL finished;

- (void)finish;
- (void)start;
- (BOOL)isConcurrent;

@end
