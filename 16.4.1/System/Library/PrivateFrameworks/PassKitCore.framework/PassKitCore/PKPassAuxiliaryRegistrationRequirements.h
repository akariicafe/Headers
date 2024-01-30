@class NSArray;

@interface PKPassAuxiliaryRegistrationRequirements : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *deviceSignatureRequirements;
@property (readonly, nonatomic) NSArray *deviceDecryptionRequirements;
@property (readonly, nonatomic) NSArray *allRequirements;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqualToPassAuxiliaryRegistrationRequirements:(id)a0;

@end
