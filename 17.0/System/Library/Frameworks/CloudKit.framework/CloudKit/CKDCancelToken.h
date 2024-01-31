@interface CKDCancelToken : NSObject <CKDCancelling> {
    BOOL _isCancelled;
}

@property (copy, nonatomic) id /* block */ cancelAction;

- (BOOL)isCancelled;
- (void).cxx_destruct;
- (void)cancel;

@end
