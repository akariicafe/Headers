@interface BRCUncancellableBlockOperation : NSBlockOperation

- (void)cancel;
- (BOOL)isCancelled;

@end
