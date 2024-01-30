@class NSString;

@interface TRIVersionedNamespace : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned int compatibilityVersion;

+ (id)versionedNamespaceWithName:(id)a0 compatibilityVersion:(unsigned int)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 compatibilityVersion:(unsigned int)a1;
- (BOOL)isEqualToVersionedNamespace:(id)a0;
- (id)copyWithReplacementName:(id)a0;
- (id)copyWithReplacementCompatibilityVersion:(unsigned int)a0;
- (void)encodeWithCoder:(id)a0;

@end
