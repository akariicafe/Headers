@class NSString, NSDecimalNumber, NSDate;

@interface PKFeatureApplicationOfferDetails : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *offerTermsIdentifier;
@property (copy, nonatomic) NSDate *expiryDate;
@property (copy, nonatomic) NSDecimalNumber *creditLimit;
@property (copy, nonatomic) NSDecimalNumber *annualFee;
@property (copy, nonatomic) NSDecimalNumber *aprForPurchase;
@property (copy, nonatomic) NSString *currencyCode;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
