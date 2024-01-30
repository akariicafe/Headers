@interface CKDCancelToken : NSObject <CKDCancelling> {
    BOOL _isCancelled;
}

@property (copy, nonatomic) id /* block */ cancelAction;

- (void).cxx_destruct;
- (BOOL)isCancelled;
- (void)cancel;

@end
