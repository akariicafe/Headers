@interface GKInternalRepresentation : NSObject <NSCoding, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)secureCodedPropertyKeys;
+ (id)internalRepresentation;
+ (id)codedPropertyKeys;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (id)serverRepresentation;
- (id)descriptionSubstitutionMap;
- (void)mergePropertiesFrom:(id)a0;

@end
