@interface GondolaDecoder : NSObject

+ (id)decodeTransactionType:(unsigned long long)a0;
+ (id)decodeTransactionTopupCategory:(unsigned long long)a0;
+ (BOOL)isTransactionTypePaymentWithReload:(unsigned long long)a0;
+ (id)decodeTotalPointsUntil1YearAgo:(id)a0;
+ (id)decodeTotalPointsUntil2YearsAgo:(id)a0;
+ (id)decodeLastTransactionDate:(id)a0;
+ (id)decodeCardNumberFromBlock0:(id)a0 andBlock1:(id)a1;
+ (BOOL)isCardUsageFlag:(id)a0;
+ (BOOL)isCardEffectiveFlag:(id)a0;
+ (id)decodeEnrollmentDateAfterDelivery:(id)a0;
+ (id)decodeHistoryBlock1:(id)a0 andWithBlock2:(id)a1;
+ (unsigned long long)decodeLastHistoryNumber:(id)a0;
+ (id)getPurseBalance:(id)a0;
+ (unsigned char)decodePointIssuer1AppStatus:(id)a0;
+ (id)decodeAutoTopUpAmount:(id)a0;
+ (id)decodeAutoTopThresholdAmount:(id)a0;
+ (id)decodeLoyaltyPointBalancesAndExpiration:(id)a0 withActivationDate:(id)a1;

@end
