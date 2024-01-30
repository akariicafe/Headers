@protocol NSObject;

@interface CKAsyncTransactionOperation : NSObject

@property (copy, nonatomic) id /* block */ operationCompletionBlock;
@property (retain) id<NSObject> value;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithOperationCompletionBlock:(id /* block */)a0;
- (void)callAndReleaseCompletionBlock:(BOOL)a0;

@end
