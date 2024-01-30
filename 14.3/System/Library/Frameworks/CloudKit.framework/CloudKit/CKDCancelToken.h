@interface CKDCancelToken : NSObject <CKDCancelling> {
    BOOL _isCancelled;
}

@property (copy, nonatomic) id /* block */ cancelAction;

- (void)cancel;
- (void).cxx_destruct;
- (BOOL)isCancelled;

@end
