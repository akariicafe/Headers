@class SKUIItemResourceRequest, SSVPlatformRequestOperation;

@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation

@property (weak) SSVPlatformRequestOperation *underlyingOperation;
@property (readonly, copy) SKUIItemResourceRequest *resourceRequest;

- (void)main;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithResourceRequest:(id)a0;

@end
