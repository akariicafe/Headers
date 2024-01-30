@class ISPerformanceDiagnosticsSettings, ISPlayerSettings, ISVitalitySettings;

@interface ISRootSettings : ISSettings

@property (retain, nonatomic) ISPlayerSettings *playerSettings;
@property (retain, nonatomic) ISVitalitySettings *vitalitySettings;
@property (retain, nonatomic) ISPerformanceDiagnosticsSettings *performanceDiagnosticsSettings;

+ (id)sharedInstance;
+ (id)_defaultsKey;
+ (id)settingsControllerModule;

- (void).cxx_destruct;
- (void)save;
- (void)setDefaultValues;

@end
