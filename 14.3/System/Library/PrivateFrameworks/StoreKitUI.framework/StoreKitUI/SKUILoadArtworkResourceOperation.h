@class SSVLoadURLOperation, SKUIArtworkRequest;

@interface SKUILoadArtworkResourceOperation : SKUILoadResourceOperation

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (readonly, copy) SKUIArtworkRequest *resourceRequest;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (id)initWithResourceRequest:(id)a0;

@end
