@class SKUIItemResourceRequest, SSVPlatformRequestOperation;

@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation

@property (weak) SSVPlatformRequestOperation *underlyingOperation;
@property (readonly, copy) SKUIItemResourceRequest *resourceRequest;

- (void)cancel;
- (void).cxx_destruct;
- (void)main;
- (id)initWithResourceRequest:(id)a0;

@end
