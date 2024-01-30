@class DBDashboardEntity, DBDashboardWorkspaceState;

@interface DBDashboardWorkspaceStateResolution : NSObject

@property (retain, nonatomic) DBDashboardWorkspaceState *state;
@property (retain, nonatomic) DBDashboardEntity *activateSuspendedEntity;

- (void).cxx_destruct;
- (id)changeItemForEntity:(id)a0;

@end
