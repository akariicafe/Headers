@interface WFCloudKitAsyncOperation : NSOperation

@property BOOL isExecuting;
@property BOOL isFinished;

- (void)start;
- (void)startExecuting;
- (void)finishExecuting;

@end
