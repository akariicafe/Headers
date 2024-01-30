@interface SBWorkspaceDefaults : SBAbstractSpringBoardDefaultDomain

@property (readonly, nonatomic, getter=isMedusaEnabled) BOOL medusaEnabled;
@property (readonly, nonatomic) long long medusaDeviceSimulation;
@property (readonly, nonatomic, getter=isBreadcrumbDisabled) BOOL breadcrumbDisabled;

- (void)_bindAndRegisterDefaults;

@end
