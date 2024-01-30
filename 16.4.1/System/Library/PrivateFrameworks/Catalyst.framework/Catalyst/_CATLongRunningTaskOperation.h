@interface _CATLongRunningTaskOperation : CATTaskOperation

- (void)main;
- (void)cancel;
- (BOOL)isAsynchronous;

@end
