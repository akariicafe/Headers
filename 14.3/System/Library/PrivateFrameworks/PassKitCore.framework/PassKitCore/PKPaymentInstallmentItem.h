@class NSDecimalNumber, NSString;

@interface PKPaymentInstallmentItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long installmentItemType;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *programIdentifier;
@property (copy, nonatomic) NSDecimalNumber *apr;
@property (copy, nonatomic) NSString *programTerms;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToInstallmentItem:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
