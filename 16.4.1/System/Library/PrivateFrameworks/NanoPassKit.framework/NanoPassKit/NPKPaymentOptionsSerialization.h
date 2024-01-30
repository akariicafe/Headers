@interface NPKPaymentOptionsSerialization : NSObject

+ (id)_billingAddressDictionaryFromEncodedData:(id)a0;
+ (id)_contactFromEncodedData:(id)a0;
+ (void)_deleteAllDefaultBillingAddresses:(id)a0;
+ (void)handleSetTransactionDefaultsRequest:(id)a0;
+ (id)setTransactionDefaultsRequest;

@end
