@interface HDUserDomainConceptPersistableProcessingState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long anchor;
@property (readonly, nonatomic) long long ontologyVersion;
@property (readonly, nonatomic) long long maximumPropertyType;

- (id)initWithAnchor:(long long)a0 ontologyVersion:(long long)a1 maximumPropertyType:(long long)a2;
- (void)encodeWithCoder:(id)a0;
- (id)copyByUpdatingAnchor:(long long)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
