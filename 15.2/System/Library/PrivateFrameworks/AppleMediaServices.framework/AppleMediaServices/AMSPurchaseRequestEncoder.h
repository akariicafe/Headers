@class NSObject, AMSPurchaseInfo;
@protocol OS_dispatch_queue, AMSBagProtocol;

@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder {
    id<AMSBagProtocol> _bag;
}

@property (readonly, nonatomic) AMSPurchaseInfo *purchaseInfo;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *purchaseRequestQueue;

+ (long long)_anisetteTypeFromAccount:(id)a0;
+ (id)_parametersFromPurchaseInfo:(id)a0 error:(id *)a1;
+ (void)configureRequest:(id)a0 purchaseInfo:(id)a1 bag:(id)a2 error:(id *)a3;

- (id)_bagURLWithError:(id *)a0;
- (id)initWithPurchaseInfo:(id)a0 bag:(id)a1;
- (id)bag;
- (void)setBag:(id)a0;
- (void).cxx_destruct;
- (id)_buyProductURLWithError:(id *)a0;
- (id)encodeRequest;
- (id)initWithPurchaseInfo:(id)a0;

@end
