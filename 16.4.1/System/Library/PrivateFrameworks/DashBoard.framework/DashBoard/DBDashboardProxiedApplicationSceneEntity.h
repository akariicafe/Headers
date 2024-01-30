@class DBDashboardApplicationSceneEntity, DBApplicationInfo;

@interface DBDashboardProxiedApplicationSceneEntity : DBDashboardEntity

@property (readonly, nonatomic) DBApplicationInfo *applicationToProxy;
@property (readonly, nonatomic) DBDashboardApplicationSceneEntity *proxyEntity;

+ (id)application:(id)a0 proxiedByEntity:(id)a1;

- (void).cxx_destruct;
- (void)_buildDescriptionWithBuilder:(id)a0;
- (id)_initWithApplication:(id)a0 proxiedByEntity:(id)a1;
- (BOOL)isProxiedApplicationEntity;

@end
