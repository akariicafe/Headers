@class PKPayLaterAccountProductDetails, PKPayLaterAccountProductEligibleSpend;

@interface PKPayLaterAccountProduct : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long productType;
@property (retain, nonatomic) PKPayLaterAccountProductDetails *productDetails;
@property (retain, nonatomic) PKPayLaterAccountProductEligibleSpend *eligibleSpend;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;

@end
