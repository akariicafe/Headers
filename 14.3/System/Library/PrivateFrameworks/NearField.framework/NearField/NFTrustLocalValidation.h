@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation>

@property (nonatomic) unsigned char primitiveLocalValidation;

+ (id)localValidationWithPassCode;
+ (id)localValidationWithTouchID;
+ (id)localValidationWithFaceID;
+ (BOOL)supportsSecureCoding;
+ (id)withPrimitiveLocalValidation:(unsigned char)a0;

- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
