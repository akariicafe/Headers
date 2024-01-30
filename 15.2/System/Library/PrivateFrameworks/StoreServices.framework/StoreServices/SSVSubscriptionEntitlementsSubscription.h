@class NSNumber, NSString, NSDate;

@interface SSVSubscriptionEntitlementsSubscription : NSObject

@property (copy, nonatomic) NSNumber *appAdamId;
@property (copy, nonatomic) NSNumber *appVersion;
@property (copy, nonatomic) NSString *chargeCountryCode;
@property (copy, nonatomic) NSString *chargeCurrencyCode;
@property (copy, nonatomic) NSNumber *chargeStoreFrontIdentifier;
@property (copy, nonatomic) NSDate *expireDate;
@property (copy, nonatomic) NSNumber *familyId;
@property (copy, nonatomic) NSNumber *inAppAdamId;
@property (copy, nonatomic) NSString *inAppVersion;
@property (nonatomic, getter=isNewsAppPurchase) BOOL newsAppPurchase;
@property (copy, nonatomic) NSString *offerIdentifier;
@property (copy, nonatomic) NSNumber *originalPurchaseDownloadId;
@property (copy, nonatomic) NSNumber *purchasabilityType;
@property (copy, nonatomic) NSNumber *purchaseDownloadId;
@property (copy, nonatomic) NSNumber *quantity;
@property (copy, nonatomic) NSString *vendorIdentifier;

- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
