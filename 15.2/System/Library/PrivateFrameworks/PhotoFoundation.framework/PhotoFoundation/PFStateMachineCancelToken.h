@interface PFStateMachineCancelToken : NSObject {
    BOOL _isCancelled;
}

- (BOOL)isCancelled;
- (void)cancel;

@end
