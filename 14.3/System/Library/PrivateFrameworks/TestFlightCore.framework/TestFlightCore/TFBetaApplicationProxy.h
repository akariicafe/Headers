@class NSString;

@interface TFBetaApplicationProxy : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *logKey;
@property (readonly, copy, nonatomic) NSString *preferredLocalizedDisplayNameForInstalledVersion;

- (void).cxx_destruct;
- (id)initForAppWithIdentifier:(id)a0;
- (BOOL)isProactiveFeedbackEnabledForInstalledVersion;
- (BOOL)isBetaAppLaunchScreenEnabledForInstalledVersion;
- (void)deviceWillInstallVersion:(id)a0 build:(id)a1 withLocalizedDisplayNames:(id)a2 localizedTestNotes:(id)a3 primaryLocaleKey:(id)a4 developerName:(id)a5 expirationDate:(id)a6 iconUrlTemplate:(id)a7 testerEmail:(id)a8;
- (void)setProactiveFeedbackEnabled:(BOOL)a0 forVersion:(id)a1 build:(id)a2;
- (void)setBetaAppLaunchScreenEnabled:(BOOL)a0 forVersion:(id)a1 build:(id)a2;
- (void)updateLocalizedTestNotes:(id)a0 forVersion:(id)a1 build:(id)a2;
- (void)overwriteMetadataForInstalledVersion:(id)a0 build:(id)a1 withLocalizedDisplayNames:(id)a2 localizedTestNotes:(id)a3 primaryLocaleKey:(id)a4 developerName:(id)a5 expirationDate:(id)a6 iconUrlTemplate:(id)a7 testerEmail:(id)a8;

@end
