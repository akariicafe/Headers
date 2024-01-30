@class NSDictionary;

@interface MPModelGenericObjectKind : MPModelKind

@property (readonly, nonatomic) NSDictionary *relationshipKinds;

+ (BOOL)supportsSecureCoding;
+ (id)kindWithRelationshipKinds:(id)a0;
+ (id)identityKind;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)humanDescription;
- (void)encodeWithCoder:(id)a0;

@end
