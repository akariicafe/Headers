@interface DBDashboardWorkspaceStateSiriChangeItem : DBDashboardWorkspaceStateChangeItem

@property (nonatomic, getter=isFloating) BOOL floating;

- (id)init;
- (id)_newEntityFromChangeItemWithPolicyProvider:(id)a0;
- (BOOL)prefersAnimation;

@end
