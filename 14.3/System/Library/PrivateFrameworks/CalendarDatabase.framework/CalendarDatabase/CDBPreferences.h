@class CalPreferences;

@interface CDBPreferences : NSObject {
    CalPreferences *_preferences;
}

@property (nonatomic, getter=get_enableTravelAdvisoriesForAutomaticBehavior, setter=set_enableTravelAdvisoriesForAutomaticBehavior:) BOOL enableTravelAdvisoriesForAutomaticBehavior;
@property (readonly) BOOL has_enableTravelAdvisoriesForAutomaticBehavior;
@property (nonatomic, getter=get_suggestEventLocations, setter=set_suggestEventLocations:) BOOL suggestEventLocations;
@property (readonly) BOOL has_suggestEventLocations;
@property (nonatomic, getter=get_sqlProfileLoggingEnabled, setter=set_sqlProfileLoggingEnabled:) BOOL sqlProfileLoggingEnabled;
@property (readonly) BOOL has_sqlProfileLoggingEnabled;
@property (nonatomic, getter=get_suggestedLocationsTestMode, setter=set_suggestedLocationsTestMode:) BOOL suggestedLocationsTestMode;
@property (readonly) BOOL has_suggestedLocationsTestMode;
@property (nonatomic, getter=get_kCalPreferredDaysToSyncKey, setter=set_kCalPreferredDaysToSyncKey:) long long kCalPreferredDaysToSyncKey;
@property (readonly) BOOL has_kCalPreferredDaysToSyncKey;
@property (nonatomic, getter=get_kCalRemindersPreferredDaysToSyncKey, setter=set_kCalRemindersPreferredDaysToSyncKey:) long long kCalRemindersPreferredDaysToSyncKey;
@property (readonly) BOOL has_kCalRemindersPreferredDaysToSyncKey;
@property (nonatomic, getter=get_LastConfirmedSplashScreenVersionViewed, setter=set_LastConfirmedSplashScreenVersionViewed:) long long LastConfirmedSplashScreenVersionViewed;
@property (readonly) BOOL has_LastConfirmedSplashScreenVersionViewed;
@property (nonatomic, getter=get_privacyPaneHasBeenAcknowledgedVersion, setter=set_privacyPaneHasBeenAcknowledgedVersion:) long long privacyPaneHasBeenAcknowledgedVersion;
@property (readonly) BOOL has_privacyPaneHasBeenAcknowledgedVersion;

+ (id)shared;

- (void)_setVersion:(unsigned long long)a0;
- (id)init;
- (BOOL)needsMigration;
- (void).cxx_destruct;
- (void)migrateIfNeededWithOptions:(unsigned long long)a0;
- (unsigned long long)_version;

@end
