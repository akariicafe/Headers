@interface CKDCancelToken : NSObject <CKDCancelling> {
    BOOL _isCancelled;
}

@property (copy, nonatomic) id /* block */ cancelAction;

- (BOOL)isCancelled;
- (void)cancel;
- (void).cxx_destruct;

@end
