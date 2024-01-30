@interface SBPowerDefaults : SBAbstractSpringBoardDefaultDomain

@property (nonatomic) BOOL disableIdleSleep;
@property (nonatomic) BOOL hideACPower;
@property (readonly, nonatomic) BOOL hideLowPowerAlerts;
@property (readonly, nonatomic) long long lowBatteryLevel;
@property (readonly, nonatomic) BOOL trackPowerEvents;

- (void)_bindAndRegisterDefaults;

@end
