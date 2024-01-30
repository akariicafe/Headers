@class NSString;

@interface DOCFeatureStateFFSetting : DOCFeatureState

@property (retain) NSString *domainID;
@property (retain) NSString *featureID;
@property long long valueMode;

+ (id)defaultsOverrideForDomainID:(id)a0 featureID:(id)a1 overrideKey:(id)a2;

- (void).cxx_destruct;
- (id)initWithDomainID:(id)a0 featureID:(id)a1 overrideKey:(id)a2 valueMode:(long long)a3 requirements:(id)a4;

@end
