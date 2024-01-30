@class NSDecimalNumber, SKProductSubscriptionPeriod, NSString, NSLocale;

@interface SKProductDiscountInternal : NSObject {
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    unsigned long long _paymentMode;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    unsigned long long _numberOfPeriods;
    unsigned long long _type;
    NSString *_identifier;
}

- (void).cxx_destruct;

@end
