@interface BRCUncancellableBlockOperation : NSBlockOperation

- (BOOL)isCancelled;
- (void)cancel;

@end
