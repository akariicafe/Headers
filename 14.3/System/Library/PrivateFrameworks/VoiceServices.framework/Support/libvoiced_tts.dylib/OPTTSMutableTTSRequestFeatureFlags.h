@interface OPTTSMutableTTSRequestFeatureFlags : OPTTSTTSRequestFeatureFlags

@property (nonatomic) BOOL fe_feature;
@property (nonatomic) BOOL fe_feature_only;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
