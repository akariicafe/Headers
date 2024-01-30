@class CNPostalAddress;

@interface CNPostalAddressContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) CNPostalAddress *postalAddress;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithPostalAddress:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
