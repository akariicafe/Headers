@interface SBHomeScreenEntity : SBWorkspaceEntity

- (BOOL)isHomeScreenEntity;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)a0;
- (id)init;
- (long long)_mainDisplayPreferredInterfaceOrientation;
- (long long)layoutRole;

@end
