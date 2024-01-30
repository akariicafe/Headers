@interface CATSharingSemaphoreOperation : CATOperation

- (void)cancel;
- (void)signal;
- (BOOL)isAsynchronous;

@end
