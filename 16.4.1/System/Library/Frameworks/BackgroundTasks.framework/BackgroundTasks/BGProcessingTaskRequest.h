@interface BGProcessingTaskRequest : BGTaskRequest

@property BOOL requiresNetworkConnectivity;
@property BOOL requiresExternalPower;

+ (Class)_correspondingTaskClass;
+ (id)_requestFromActivity:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)_activity;

@end
