@class SSVLoadURLOperation, SKUISortDataRequest;

@interface SKUILoadSortDataOperation : SKUILoadResourceOperation

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (readonly, copy) SKUISortDataRequest *resourceRequest;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (id)initWithResourceRequest:(id)a0;

@end
