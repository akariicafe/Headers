@interface PFStateMachineCancelToken : NSObject {
    BOOL _isCancelled;
}

- (void)cancel;
- (BOOL)isCancelled;

@end
