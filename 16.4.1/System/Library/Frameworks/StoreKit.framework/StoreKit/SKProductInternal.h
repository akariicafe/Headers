@class NSDecimalNumber, NSString, NSArray, SKProductDiscount, NSLocale, SKProductSubscriptionPeriod;

@interface SKProductInternal : NSObject {
    NSString *_contentVersion;
    BOOL _downloadable;
    BOOL _familyShareable;
    NSArray *_downloadContentLengths;
    SKProductDiscount *_introductoryPrice;
    NSString *_localeIdentifier;
    NSString *_localizedDescription;
    NSString *_localizedTitle;
    NSDecimalNumber *_price;
    NSLocale *_priceLocale;
    NSString *_productIdentifier;
    NSString *_subscriptionGroupIdentifier;
    SKProductSubscriptionPeriod *_subscriptionPeriod;
    NSArray *_discounts;
}

- (void).cxx_destruct;

@end
