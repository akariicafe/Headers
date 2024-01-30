@class CKDClientProxy;

@interface CKDProxyOperationQueue : NSOperationQueue

@property (weak, nonatomic) CKDClientProxy *proxy;

- (void)addOperation:(id)a0;
- (id)initWithProxy:(id)a0;
- (void).cxx_destruct;

@end
