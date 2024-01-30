@interface PSGContinuityController : PSListController

- (id)init;
- (id)specifiers;
- (void)profileNotification:(id)a0;
- (BOOL)isContinuityRestricted;
- (void)updateContinuitySpecifiers;
- (id)isContinuityEnabled:(id)a0;
- (void)setContinuityEnabled:(id)a0 specifier:(id)a1;
- (id)airplayToTV:(id)a0;
- (void)setAirplayToTV:(id)a0 specifier:(id)a1;

@end
