@class CNDonationOrigin;

@interface CNDonationValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CNDonationOrigin *origin;

+ (id)donationValueWithPostalAddress:(id)a0 style:(long long)a1 label:(id)a2 origin:(id)a3;
+ (id)donationValueWithEmailAddress:(id)a0 label:(id)a1 origin:(id)a2;
+ (id)donationValueWithImageData:(id)a0 origin:(id)a1;
+ (id)donationValueWithNameComponents:(id)a0 origin:(id)a1;
+ (id)donationValueWithPhoneNumber:(id)a0 label:(id)a1 origin:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithPropertyListRepresentation:(id)a0;
- (id)propertyListRepresentation;
- (id)initWithCoder:(id)a0;
- (void)updatePropertyListRepresentation:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;
- (id)initWithOrigin:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithNewExpirationDate:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
