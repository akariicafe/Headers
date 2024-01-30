@class NSSet, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AMSBagKeySet : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly, nonatomic) NSMutableDictionary *bagKeySetCache;
@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *bagKeySetCacheAccessQueue;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSSet *keys;
@property (readonly, nonatomic) unsigned long long count;

+ (void)registerBagKeySet:(id)a0 forProfile:(id)a1 profileVersion:(id)a2;
+ (id)registeredBagKeySetForProfile:(id)a0 profileVersion:(id)a1;
+ (void)resetRegisteredBagKeySets;

- (BOOL)hasKey:(id)a0;
- (id)bagKeyInfoForKey:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
