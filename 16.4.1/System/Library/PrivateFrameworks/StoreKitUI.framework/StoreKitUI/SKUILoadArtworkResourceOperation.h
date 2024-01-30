@class SSVLoadURLOperation, SKUIArtworkRequest;

@interface SKUILoadArtworkResourceOperation : SKUILoadResourceOperation

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (readonly, copy) SKUIArtworkRequest *resourceRequest;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithResourceRequest:(id)a0;

@end
