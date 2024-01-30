@interface PLSpotlightAsyncOperation : NSOperation

@property unsigned long long operationState;

- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;
- (void)start;
- (id)_keyObserverStringForOperationState:(unsigned long long)a0;

@end
