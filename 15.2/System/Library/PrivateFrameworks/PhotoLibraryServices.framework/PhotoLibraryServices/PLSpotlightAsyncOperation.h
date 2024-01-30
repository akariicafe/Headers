@interface PLSpotlightAsyncOperation : NSOperation

@property unsigned long long operationState;

- (BOOL)isFinished;
- (BOOL)isAsynchronous;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (id)_keyObserverStringForOperationState:(unsigned long long)a0;
- (void)cancel;

@end
