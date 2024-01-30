@interface SOAsynchronousOperation : NSOperation

@property (nonatomic) unsigned long long state;

- (void)finish;
- (BOOL)isReady;
- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (id)init;

@end
