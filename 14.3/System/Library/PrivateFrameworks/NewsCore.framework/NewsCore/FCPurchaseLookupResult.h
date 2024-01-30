@class NSString, NSNumber, FCIntroductoryOffer;

@interface FCPurchaseLookupResult : NSObject

@property (copy, nonatomic) NSString *purchaseID;
@property (copy, nonatomic) NSString *offerName;
@property (copy, nonatomic) NSString *subscriptionPeriodInISO_8601;
@property (copy, nonatomic) NSString *subscriptionPriceFormatted;
@property (copy, nonatomic) NSNumber *price;
@property (copy, nonatomic) NSNumber *appAdamID;
@property (retain, nonatomic) FCIntroductoryOffer *introOffer;

- (void).cxx_destruct;

@end
