@class NSDecimalNumber, NSDate;

@interface FHPaymentRingData : NSObject

@property (copy, nonatomic) NSDate *transactionDate;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (nonatomic) unsigned long long paymentAmountCategory;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTransactionDate:(id)a0 transactionAmount:(id)a1 paymentAmountCategory:(unsigned long long)a2;

@end
