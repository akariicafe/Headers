@class NSData;

@interface _CNImageDataDonationValue : CNDonationValue

@property (readonly, copy, nonatomic) NSData *imageData;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithImageData:(id)a0 origin:(id)a1;
- (id)copyWithNewExpirationDate:(id)a0;
- (void)acceptDonationValueVisitor:(id)a0;

@end
