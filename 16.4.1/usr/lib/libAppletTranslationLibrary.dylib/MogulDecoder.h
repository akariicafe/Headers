@interface MogulDecoder : NSObject

+ (id)decodeCardID:(id)a0;
+ (id)decodeCardIssueDate:(id)a0;
+ (id)decodeChargeAmountFlagValue:(id)a0;
+ (int)decodeEnableFlag:(id)a0;
+ (id)decodePointsData:(id)a0 andWith:(id)a1;
+ (unsigned char)decodeStatusFlag:(id)a0;
+ (unsigned char)decodeTopupFlag:(id)a0;
+ (unsigned char)decodeTopupSettings:(id)a0;
+ (id)decodeTransactionHistoryEntry:(id)a0;
+ (id)decodeTransactionTypeCode:(unsigned char)a0;
+ (id)getPurseBalance:(id)a0;
+ (BOOL)isTopUpTransactionType:(unsigned char)a0;

@end
