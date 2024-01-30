@class NSString;

@interface DOCFeatureStateFFSetting : DOCFeatureState

@property (retain) NSString *domainID;
@property (retain) NSString *featureID;
@property long long valueMode;

- (void).cxx_destruct;
- (id)initWithDomainID:(id)a0 featureID:(id)a1 valueMode:(long long)a2;

@end
