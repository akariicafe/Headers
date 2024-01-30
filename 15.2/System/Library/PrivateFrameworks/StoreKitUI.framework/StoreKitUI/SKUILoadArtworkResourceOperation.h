@class SSVLoadURLOperation, SKUIArtworkRequest;

@interface SKUILoadArtworkResourceOperation : SKUILoadResourceOperation

@property (weak) SSVLoadURLOperation *underlyingOperation;
@property (readonly, copy) SKUIArtworkRequest *resourceRequest;

- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)a0;

@end
