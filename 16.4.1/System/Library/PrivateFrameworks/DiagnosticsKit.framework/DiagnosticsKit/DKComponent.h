@class NSDictionary, DKComponentIdentity;

@interface DKComponent : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) DKComponentIdentity *identity;
@property (readonly, nonatomic) NSDictionary *attributes;

+ (id)componentWithIdentity:(id)a0 attributes:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryForJSON;
- (id)initWithIdentity:(id)a0 attributes:(id)a1;

@end
