@interface DBMutableWorkspaceStateChangeRequest : DBWorkspaceStateChangeRequest

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)activateSiri;
- (void)activateApplication:(id)a0;
- (void)activateApplication:(id)a0 withSettings:(id)a1;
- (void)activateHomeScreen;
- (void)activateSiriFloating;
- (void)activateStackedApplication:(id)a0;
- (void)activateStackedApplication:(id)a0 withSettings:(id)a1;
- (void)addChangeItem:(id)a0;
- (void)deactivateApplication:(id)a0;
- (void)deactivateSiri;
- (void)destroyApplication:(id)a0;
- (void)removeChangeItem:(id)a0;

@end
