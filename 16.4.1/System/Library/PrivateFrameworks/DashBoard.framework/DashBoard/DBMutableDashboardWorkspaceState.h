@class DBDashboardEntity;

@interface DBMutableDashboardWorkspaceState : DBDashboardWorkspaceState

@property (retain, nonatomic) DBDashboardEntity *baseEntity;
@property (retain, nonatomic) DBDashboardEntity *stackedEntity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBaseEntity:(id)a0;
- (void)setStackedEntity:(id)a0;

@end
