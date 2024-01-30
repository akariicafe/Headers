@interface FBMutableSystemShellInitializationOptions : FBSystemShellInitializationOptions

@property (nonatomic) BOOL initializeReadyForInteraction;
@property (nonatomic) BOOL resetDarkBootState;
@property (nonatomic) BOOL shouldWaitForMigrator;
@property (nonatomic) double systemSleepInterval;
@property (copy, nonatomic) id /* block */ registerAdditionalServicesBlock;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setInitializeReadyForInteraction:(BOOL)a0;
- (void)setResetDarkBootState:(BOOL)a0;
- (void)setShouldWaitForMigrator:(BOOL)a0;
- (void)setSystemSleepInterval:(double)a0;
- (void)setRegisterAdditionalServicesBlock:(id /* block */)a0;

@end
