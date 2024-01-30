@class NSString, NSDecimalNumber, PKCurrencyAmount;

@interface PKTransactionReceiptSummaryItem : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *label;
@property (retain, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToTransactionReceiptSummaryItem:(id)a0;
- (id)initWithDictionary:(id)a0 bundle:(id)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
