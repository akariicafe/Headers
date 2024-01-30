@interface SBExternalDisplayRuntimeAvailabilitySettings : PTSettings

@property (nonatomic) BOOL requirePointer;
@property (nonatomic) BOOL requireHardwareKeyboard;
@property (readonly, nonatomic) long long extendedDisplayRequirements;

+ (id)settingsControllerModule;
+ (id)_moduleWithSectionTitle:(id)a0;
+ (BOOL)ignoresKey:(id)a0;

- (void)setDefaultValues;

@end
