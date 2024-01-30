@class PKMerchant, NSString, NSArray, PKPaymentTransaction;

@interface PKPaymentTransactionIconRequest : NSObject

@property (retain, nonatomic) PKPaymentTransaction *transaction;
@property (retain, nonatomic) PKMerchant *merchant;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (retain, nonatomic) NSString *cacheKey;
@property (retain, nonatomic) NSArray *completionHandlers;
@property (nonatomic) BOOL ignoreLogoURL;

- (id)logoURL;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
