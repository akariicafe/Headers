@class NSDecimalNumber, NSString, NSArray, SKProductSubscriptionPeriod, NSLocale, SKProductDiscount;

@interface SKProduct : NSObject {
    id _internal;
}

@property (copy, nonatomic, getter=_localeIdentifier, setter=_setLocaleIdentifier:) NSString *_localeIdentifier;
@property (readonly, nonatomic) NSString *localizedDescription;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSDecimalNumber *price;
@property (readonly, nonatomic) NSLocale *priceLocale;
@property (readonly, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) BOOL isDownloadable;
@property (readonly, nonatomic) BOOL downloadable;
@property (readonly, nonatomic) BOOL isFamilyShareable;
@property (readonly, nonatomic) NSArray *contentLengths;
@property (readonly, nonatomic) NSArray *downloadContentLengths;
@property (readonly, nonatomic) NSString *contentVersion;
@property (readonly, nonatomic) NSString *downloadContentVersion;
@property (readonly, nonatomic) SKProductSubscriptionPeriod *subscriptionPeriod;
@property (readonly, nonatomic) SKProductDiscount *introductoryPrice;
@property (readonly, nonatomic) NSString *subscriptionGroupIdentifier;
@property (readonly, nonatomic) NSArray *discounts;

+ (id)productsFromDictionaries:(id)a0;
+ (id)productsFromXPCEncodingsArray:(id)a0;

- (id)initWithXPCEncoding:(id)a0;
- (id)initMinusLocaleWithDictionary:(id)a0;
- (id)copyXPCEncoding;
- (void)_setLocalizedDescription:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setDownloadContentLengths:(id)a0;
- (void)_setLocalizedTitle:(id)a0;
- (void)_setSubscriptionGroupIdentifier:(id)a0;
- (void)_setProductIdentifier:(id)a0;
- (void)_setFamilyShareable:(BOOL)a0;
- (void)_setIntroductoryPrice:(id)a0;
- (void)_setContentVersion:(id)a0;
- (void)_setPrice:(id)a0;
- (void)_setDownloadable:(BOOL)a0;
- (id)initWithDictionary:(id)a0;
- (void)_setDiscounts:(id)a0;
- (void)_setPriceLocale:(id)a0;
- (id)initMinusLocaleWithXPCEncoding:(id)a0;
- (void)_setSubscriptionPeriod:(id)a0;

@end
