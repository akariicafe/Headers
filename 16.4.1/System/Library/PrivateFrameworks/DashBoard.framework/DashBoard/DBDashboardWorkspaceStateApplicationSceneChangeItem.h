@class NSDictionary, DBApplicationInfo;

@interface DBDashboardWorkspaceStateApplicationSceneChangeItem : DBDashboardWorkspaceStateChangeItem

@property (retain, nonatomic) DBApplicationInfo *application;
@property (retain, nonatomic) NSDictionary *activationSettings;

- (id)initWithApplication:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)_buildDescriptionWithBuilder:(id)a0;
- (id)_newEntityFromChangeItemWithPolicyProvider:(id)a0;
- (BOOL)prefersAnimation;

@end
