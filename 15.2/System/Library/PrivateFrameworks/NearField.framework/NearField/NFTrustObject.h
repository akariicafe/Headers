@interface NFTrustObject : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowedXPCClasses;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)allowedXPCClasses;

@end
