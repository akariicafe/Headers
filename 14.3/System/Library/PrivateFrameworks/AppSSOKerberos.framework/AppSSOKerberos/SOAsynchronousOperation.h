@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (BOOL)isReady;
- (void)finish;
- (id)init;
- (void)main;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;

@end
