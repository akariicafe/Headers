@class NSString, NSNumber;

@interface FCSubscriptionEntitlement : NSObject

@property (readonly, nonatomic) NSString *servicesBundleAdamID;
@property (readonly, nonatomic) NSNumber *appAdamID;
@property (readonly, nonatomic) NSString *chargeCurrencyCode;
@property (readonly, nonatomic) NSNumber *inAppAdamID;
@property (readonly, nonatomic, getter=isNewsAppPurchase) BOOL newsAppPurchase;
@property (readonly, nonatomic) BOOL isTrialPeriod;
@property (readonly, nonatomic) BOOL isPurchaser;
@property (readonly, nonatomic) BOOL isAmplifyUser;
@property (readonly, nonatomic) NSString *vendorAdHocOfferID;

- (id)description;
- (void).cxx_destruct;
- (id)initWithASDEntitlement:(id)a0;
- (id)initWithAppAdamID:(id)a0 inAppAdamID:(id)a1 chargeCurrencyCode:(id)a2 newsAppPurchase:(BOOL)a3 isTrialPeriod:(BOOL)a4 isPurchaser:(BOOL)a5 servicesBundleAdamID:(id)a6 isAmplifyUser:(BOOL)a7 vendorAdHocOfferID:(id)a8;

@end
