@class NSSet, NSMutableDictionary;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSMutableDictionary *bagKeySetCache;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *keys;
@property (readonly, nonatomic) unsigned long long count;

+ (id)registeredBagKeySetForProfile:(id)a0 profileVersion:(id)a1;
+ (void)resetRegisteredBagKeySets;
+ (void)registerBagKeySet:(id)a0 forProfile:(id)a1 profileVersion:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)hasKey:(id)a0;
- (id)bagKeyInfoForKey:(id)a0;

@end
