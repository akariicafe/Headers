@class SKUIItemResourceRequest, SSVPlatformRequestOperation;

@interface SKUILoadItemResourceOperation : SKUILoadResourceOperation

@property (weak) SSVPlatformRequestOperation *underlyingOperation;
@property (readonly, copy) SKUIItemResourceRequest *resourceRequest;

- (void)main;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithResourceRequest:(id)a0;

@end
