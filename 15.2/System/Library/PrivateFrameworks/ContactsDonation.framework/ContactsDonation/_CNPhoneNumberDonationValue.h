@class NSString, CNPhoneNumber;

@interface _CNPhoneNumberDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) CNPhoneNumber *phoneNumber;
@property (readonly, copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithNewExpirationDate:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updatePropertyListRepresentation:(id)a0;
- (unsigned long long)hash;
- (id)initWithPhoneNumber:(id)a0 label:(id)a1 origin:(id)a2;

@end
