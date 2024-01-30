@class SSVLoadURLOperation, SKUISortDataRequest;

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (readonly, copy) SKUISortDataRequest *resourceRequest;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithResourceRequest:(id)a0;

@end
