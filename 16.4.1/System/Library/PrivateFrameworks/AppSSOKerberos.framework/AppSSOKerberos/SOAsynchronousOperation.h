@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (void)finish;
- (BOOL)isReady;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (BOOL)isAsynchronous;
- (id)init;
- (void)start;

@end
