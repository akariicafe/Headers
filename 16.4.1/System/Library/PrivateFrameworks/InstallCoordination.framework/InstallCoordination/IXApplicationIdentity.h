@class NSString, MIAppIdentity;

@interface IXApplicationIdentity : MIAppIdentity <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) MIAppIdentity *miAppIdentity;
@property (nonatomic) BOOL isPersonalPersonaPlaceholder;

+ (id)identitiesForBundleIdentifiers:(id)a0;

- (id)initWithBundleIdentifier:(id)a0 personaUniqueString:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)possibleSerializationsForPlistKey;
- (id)canonicalSerializationForPlistKey;
- (id)initUsingPersonaFromCurrentThreadAndBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (id)description;
- (id)initWithPlistKeySerialization:(id)a0;

@end
