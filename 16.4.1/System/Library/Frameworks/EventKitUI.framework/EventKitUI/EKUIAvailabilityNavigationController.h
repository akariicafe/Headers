@interface EKUIAvailabilityNavigationController : EKUIManagedNavigationController

- (long long)modalPresentationStyle;
- (BOOL)canManagePresentationStyle;
- (BOOL)wantsManagement;
- (BOOL)presentModally;

@end
