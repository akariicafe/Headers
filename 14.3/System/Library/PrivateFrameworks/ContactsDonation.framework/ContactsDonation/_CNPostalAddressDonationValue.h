@class CNPostalAddress, NSString;

@interface _CNPostalAddressDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) CNPostalAddress *postalAddress;
@property (readonly, nonatomic) long long style;
@property (readonly, copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPostalAddress:(id)a0 style:(long long)a1 label:(id)a2 origin:(id)a3;
- (void)updatePropertyListRepresentation:(id)a0;
- (id)copyWithNewExpirationDate:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;

@end
