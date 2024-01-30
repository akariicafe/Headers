@class ICStoreRequestContext, NSString;

@interface _BLAcquireSlotRequest : ICRequestOperation {
    ICStoreRequestContext *_requestContext;
    NSString *_deviceGUID;
}

- (void)execute;
- (void)performRequestWithResponseHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_acquireSlotWithURL:(id)a0;
- (id)initWithDeviceGUID:(id)a0;

@end
