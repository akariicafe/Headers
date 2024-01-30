@class PKPaymentWebService;

@interface PKPaymentCloudStoreZoneCreationManager : NSObject {
    PKPaymentWebService *_webService;
}

- (void).cxx_destruct;
- (id)initWithWebService:(id)a0;
- (void)triggerCloudStoreZoneCreationIfNeededForProvisioningRequest:(id)a0 completion:(id /* block */)a1;

@end
