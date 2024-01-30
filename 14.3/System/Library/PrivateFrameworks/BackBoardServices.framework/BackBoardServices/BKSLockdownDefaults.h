@interface BKSLockdownDefaults : BSAbstractDefaultDomain

@property (readonly, nonatomic) BOOL tetheredDisplayPortMode;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
