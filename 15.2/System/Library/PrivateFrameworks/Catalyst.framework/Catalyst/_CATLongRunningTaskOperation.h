@interface _CATLongRunningTaskOperation : CATTaskOperation

- (BOOL)isAsynchronous;
- (void)main;
- (void)cancel;

@end
