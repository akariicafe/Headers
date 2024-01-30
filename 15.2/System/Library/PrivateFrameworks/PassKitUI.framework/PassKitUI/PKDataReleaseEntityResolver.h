@class NSObject, PKPaymentService;
@protocol OS_dispatch_queue;

@interface PKDataReleaseEntityResolver : NSObject {
    PKPaymentService *_paymentService;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)init;
- (void)_merchantForIdentifier:(id)a0 withCurrentMerchant:(id)a1 fromMobileAssetLocalOnly:(BOOL)a2 completion:(id /* block */)a3;
- (void)resolveEntityForRpIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resolveEntityForRequest:(id)a0 completion:(id /* block */)a1;

@end
