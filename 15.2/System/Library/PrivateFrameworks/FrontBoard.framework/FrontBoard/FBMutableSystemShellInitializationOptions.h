@class NSString;

@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (nonatomic) BOOL initializeReadyForInteraction;
@property (nonatomic) BOOL resetDarkBootState;
@property (nonatomic) BOOL shouldWaitForMigrator;
@property (nonatomic) double systemSleepInterval;
@property (copy, nonatomic) id /* block */ registerAdditionalServicesBlock;
@property (copy, nonatomic) NSString *independentWatchdogPortName;

- (void)setRegisterAdditionalServicesBlock:(id /* block */)a0;
- (void)setIndependentWatchdogPortName:(id)a0;
- (void)setSystemSleepInterval:(double)a0;
- (void)setResetDarkBootState:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInitializeReadyForInteraction:(BOOL)a0;
- (void)setShouldWaitForMigrator:(BOOL)a0;

@end
