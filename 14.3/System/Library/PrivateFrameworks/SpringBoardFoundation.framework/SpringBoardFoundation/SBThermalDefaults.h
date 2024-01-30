@interface SBThermalDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL wasConnectedToWiFiWhenBrickedForThermalConditions;

- (void)_bindAndRegisterDefaults;

@end
