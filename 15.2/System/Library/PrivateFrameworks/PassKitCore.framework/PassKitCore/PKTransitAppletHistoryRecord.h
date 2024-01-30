@class NSDecimalNumber, NSString, NSArray, NSData, NSDate, NSNumber;

@interface PKTransitAppletHistoryRecord : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long _transitModifiers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long paymentTransactionType;
@property (readonly, nonatomic) long long transitTransactionSubtype;
@property (readonly, nonatomic) unsigned long long transitTransactionModifier;
@property (copy, nonatomic) NSNumber *historySequenceNumber;
@property (copy, nonatomic) NSString *transitDetail;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long subtype;
@property (nonatomic) unsigned long long detail;
@property (copy, nonatomic) NSDate *time;
@property (copy, nonatomic) NSDecimalNumber *balance;
@property (copy, nonatomic) NSNumber *loyaltyBalance;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSNumber *loyaltyAmount;
@property (copy, nonatomic) NSData *startStation;
@property (copy, nonatomic) NSData *endStation;
@property (copy, nonatomic) NSNumber *cityCode;
@property (readonly, nonatomic) long long paymentTransactionType;
@property (readonly, nonatomic) long long transitTransactionSubtype;
@property (readonly, nonatomic) unsigned long long transitTransactionModifier;
@property (nonatomic) long long recordType;
@property (copy, nonatomic) NSArray *amounts;
@property (copy, nonatomic) NSArray *plans;

- (void)encodeWithCoder:(id)a0;
- (void)_setTransactionHistoryDetailsFromString:(id)a0;
- (BOOL)isEqualToTransitAppletHistoryRecord:(id)a0;
- (id)_transactionCommutePlanUnitsWithPlanLabels:(id)a0;
- (id)_transactionAmountsWithBalanceLabels:(id)a0 unitDictionary:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)concreteTransactionWithCurrency:(id)a0 balanceLabels:(id)a1 unitDictionary:(id)a2 planLabels:(id)a3;
- (id)initWithDictionary:(id)a0;
- (id)felicaHistoryRecord;
- (unsigned long long)hash;
- (void)dealloc;

@end
