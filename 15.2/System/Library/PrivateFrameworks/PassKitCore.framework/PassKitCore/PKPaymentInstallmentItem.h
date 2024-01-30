@class NSDecimalNumber, NSString;

@interface PKPaymentInstallmentItem : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long installmentItemType;
@property (copy, nonatomic) NSDecimalNumber *amount;
@property (copy, nonatomic) NSString *currencyCode;
@property (copy, nonatomic) NSString *programIdentifier;
@property (copy, nonatomic) NSDecimalNumber *apr;
@property (copy, nonatomic) NSString *programTerms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToInstallmentItem:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
