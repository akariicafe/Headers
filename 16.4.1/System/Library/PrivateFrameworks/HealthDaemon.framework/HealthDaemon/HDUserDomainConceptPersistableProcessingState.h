@interface HDUserDomainConceptPersistableProcessingState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long anchor;
@property (readonly, nonatomic) long long ontologyVersion;
@property (readonly, nonatomic) long long maximumPropertyType;

+ (BOOL)fetchFromKeyValueDomain:(id)a0 stateOut:(id *)a1 error:(id *)a2;

- (id)initWithAnchor:(long long)a0 ontologyVersion:(long long)a1 maximumPropertyType:(long long)a2;
- (BOOL)persistInKeyValueDomain:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;

@end
