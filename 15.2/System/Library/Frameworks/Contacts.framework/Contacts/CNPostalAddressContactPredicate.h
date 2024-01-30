@class CNPostalAddress;

@interface CNPostalAddressContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) CNPostalAddress *postalAddress;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPostalAddress:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;

@end
