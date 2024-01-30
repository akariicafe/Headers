@class SKProductsRequest, NSString, SKProduct, NSError, NSNumber, NSObject;
@protocol OS_dispatch_group;

@interface FCProductLookup : NSObject <SKProductsRequestDelegate>

@property (readonly, nonatomic) NSString *offerName;
@property (readonly, nonatomic) NSNumber *appAdamID;
@property (readonly, nonatomic) NSNumber *storeExternalVersionID;
@property (readonly, nonatomic) NSObject<OS_dispatch_group> *productRequestGroup;
@property (readonly, nonatomic) SKProductsRequest *request;
@property (retain, nonatomic) SKProduct *product;
@property (retain, nonatomic) NSError *productLookupError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)lookup;
- (id)initWithOfferName:(id)a0 appAdamID:(id)a1 storeExternalVersionID:(id)a2;
- (void)requestDidFinish:(id)a0;
- (void)productsRequest:(id)a0 didReceiveResponse:(id)a1;

@end
