@class MOApplicationCategoryShieldPolicy;

@interface MOApplicationCategoryShieldPolicySettingMetadata : MOSettingMetadata

@property (readonly, nonatomic) unsigned long long maximumActivityCount;
@property (readonly, nonatomic) unsigned long long maximumCategoryCount;
@property (readonly, nonatomic) MOApplicationCategoryShieldPolicy *defaultValue;

- (id)valueFromPersistableValue:(id)a0;
- (id)sanitizePersistableValue:(id)a0;
- (id)persistableValueFromValue:(id)a0;
- (id)_combine:(id)a0 with:(id)a1;
- (id)combinePersistableValue:(id)a0 with:(id)a1;
- (id)initWithDefaultPolicy:(id)a0 maximumCategoryCount:(unsigned long long)a1 maximumActivityCount:(unsigned long long)a2 isPublic:(BOOL)a3;

@end
