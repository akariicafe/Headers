@class NSString, NSDictionary, NSData, SKPaymentDiscount;

@interface SKPaymentInternal : NSObject <NSCopying> {
    NSString *_applicationUsername;
    NSString *_partnerIdentifier;
    NSString *_partnerTransactionIdentifier;
    NSString *_productIdentifier;
    long long _quantity;
    NSData *_requestData;
    NSDictionary *_requestParameters;
    BOOL _simulatesAskToBuyInSandbox;
    BOOL _isStoreOriginated;
    SKPaymentDiscount *_paymentDiscount;
}

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
