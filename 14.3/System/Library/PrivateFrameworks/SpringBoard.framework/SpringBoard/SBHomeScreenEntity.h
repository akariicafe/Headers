@interface SBHomeScreenEntity : SBWorkspaceEntity

- (id)init;
- (BOOL)isHomeScreenEntity;
- (long long)layoutRole;
- (void)_setMainDisplayPreferredInterfaceOrientation:(long long)a0;
- (long long)_mainDisplayPreferredInterfaceOrientation;

@end
