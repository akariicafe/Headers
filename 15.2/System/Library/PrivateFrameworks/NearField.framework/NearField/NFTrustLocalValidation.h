@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation>

@property (nonatomic) unsigned char primitiveLocalValidation;

+ (BOOL)supportsSecureCoding;
+ (id)localValidationWithPassCode;
+ (id)localValidationWithTouchID;
+ (id)localValidationWithFaceID;
+ (id)withPrimitiveLocalValidation:(unsigned char)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;

@end
