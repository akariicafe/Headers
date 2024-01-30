@interface _CATLongRunningTaskOperation : CATTaskOperation

- (void)cancel;
- (void)main;
- (BOOL)isAsynchronous;

@end
