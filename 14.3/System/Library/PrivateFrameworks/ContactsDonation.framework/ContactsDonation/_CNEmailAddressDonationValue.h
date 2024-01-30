@class NSString;

@interface _CNEmailAddressDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSString *emailAddress;
@property (readonly, copy, nonatomic) NSString *label;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithEmailAddress:(id)a0 label:(id)a1 origin:(id)a2;
- (void)updatePropertyListRepresentation:(id)a0;
- (id)copyWithNewExpirationDate:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;

@end
