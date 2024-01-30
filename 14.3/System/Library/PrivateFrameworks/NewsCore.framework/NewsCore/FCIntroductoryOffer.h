@class NSString;

@interface FCIntroductoryOffer : NSObject

@property (copy, nonatomic) NSString *priceFormatted;
@property (copy, nonatomic) NSString *subscriptionPeriodInISO_8601;
@property (nonatomic) int offerType;
@property (nonatomic) unsigned long long numOfPeriods;

- (void).cxx_destruct;
- (id)initWithOfferType:(int)a0 priceFormatted:(id)a1 recurringSubscriptionPeriod:(id)a2 numOfPeriods:(unsigned long long)a3;

@end
