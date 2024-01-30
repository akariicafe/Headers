@interface AMSFraudScoreService : NSObject

+ (id)cachedFraudScoreForPurchaseInfo:(id)a0;
+ (id)cacheFraudScore:(id)a0 forPurchaseInfo:(id)a1;
+ (id)didConsumeFraudScoreForPurchaseInfo:(id)a0;
+ (id)generateFraudScoreForAction:(unsigned long long)a0 account:(id)a1 purchaseIdentifier:(id)a2 logKey:(id)a3;

@end
