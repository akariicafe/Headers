@class NSNumber;

@interface SUSUIPreferences : NSObject

@property (readonly, nonatomic) BOOL alertAfterDownload;
@property (readonly, retain, nonatomic) NSNumber *passcodeRequiredDays;
@property (nonatomic, setter=setNeedsAlertPresentationAfterOTAUpdate:) BOOL needsAlertPresentationAfterOTAUpdate;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_loadPreferences;
- (void)_setBooleanPreferenceForKey:(id)a0 value:(BOOL)a1;
- (BOOL)_getBooleanPreferenceForKey:(id)a0 withDefaultValue:(BOOL)a1;
- (id)_copyNumberPreferenceForKey:(id)a0;
- (id)_copyStringPreferenceForKey:(id)a0;
- (void *)_copyPreferenceForKey:(struct __CFString { } *)a0 ofType:(unsigned long long)a1;

@end
