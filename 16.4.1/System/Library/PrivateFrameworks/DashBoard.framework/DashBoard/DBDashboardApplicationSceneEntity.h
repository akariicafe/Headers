@class DBApplicationInfo;

@interface DBDashboardApplicationSceneEntity : DBDashboardEntity

@property (readonly, nonatomic) DBApplicationInfo *applicationInfo;

+ (id)applicationSceneEntityForApplicationInfo:(id)a0;

- (void).cxx_destruct;
- (void)_buildDescriptionWithBuilder:(id)a0;
- (id)_initWithApplicationInfo:(id)a0;
- (BOOL)isApplicationEntity;
- (BOOL)isFullScreenEntity;

@end
