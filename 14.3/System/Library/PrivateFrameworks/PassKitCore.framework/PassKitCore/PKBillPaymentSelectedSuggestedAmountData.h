@class NSString, NSDecimalNumber, NSDate;

@interface PKBillPaymentSelectedSuggestedAmountData : NSObject <NSSecureCoding, PKRecordObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSDate *transactionDate;
@property (nonatomic) unsigned long long suggestedAmountCategory;
@property (copy, nonatomic) NSDecimalNumber *transactionAmount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)recordNamePrefix;
+ (id)recordType;

- (void).cxx_destruct;
- (id)initWithStatementIdentifier:(id)a0 transactionDate:(id)a1 transactionAmount:(id)a2 suggestedAmountCategory:(unsigned long long)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithRecord:(id)a0;
- (id)initWithRecord:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
