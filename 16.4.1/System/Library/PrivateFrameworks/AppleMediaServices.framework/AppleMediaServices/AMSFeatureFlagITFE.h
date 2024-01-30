@class NSString;

@interface AMSFeatureFlagITFE : NSObject

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isReadonly) BOOL readonly;
@property (copy, nonatomic) NSString *value;

+ (BOOL)_isITFEValueCustom:(id)a0;
+ (id)_concreteITFEs;
+ (id)fetchMutableFeatures;
+ (void)setMutableFeatureName:(id)a0 toValue:(id)a1;
+ (void)removeOrphanITFEValues:(id)a0;
+ (id)_remoteGroupITFEs;
+ (void)verifyOrphansForGroups:(id)a0;
+ (id)_mutableITFEs;
+ (id)fetchProfileFeatures;
+ (void)verifyOrphans;
+ (id)_profileITFEs;
+ (void)resetFeatures;
+ (id)_flagGroupITFEs;
+ (id)_customITFEs;
+ (id)fetchCustomFeatures;

- (id)initWithValue:(id)a0 isEnabled:(BOOL)a1 isMutable:(BOOL)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)toggle:(BOOL)a0;
- (void).cxx_destruct;

@end
