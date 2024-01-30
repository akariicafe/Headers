@class NSString, SKMutablePayment, NSNumber, FCIntroductoryOffer;

@interface FCPurchase : NSObject

@property (readonly, nonatomic) NSNumber *appAdamID;
@property (readonly, nonatomic) NSString *purchaseID;
@property (readonly, nonatomic) NSString *subscriptionPriceFormatted;
@property (readonly, nonatomic) NSString *subscriptionPeriodInISO_8601;
@property (readonly, nonatomic) NSString *offerName;
@property (readonly, nonatomic) NSNumber *storeExternalVersion;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSNumber *price;
@property (readonly, nonatomic, getter=isFreeTrialEligible) BOOL freeTrialEligible;
@property (readonly, nonatomic) FCIntroductoryOffer *introductoryOffer;
@property (readonly, nonatomic) SKMutablePayment *payment;

- (id)initWithPurchaseID:(id)a0 appAdamID:(id)a1 subscriptionPriceFormatted:(id)a2 subscriptionPeriodInISO_8601:(id)a3 offerName:(id)a4 storeExternalVersion:(id)a5 bundleID:(id)a6 price:(id)a7 introOffer:(id)a8 payment:(id)a9;
- (void).cxx_destruct;

@end
