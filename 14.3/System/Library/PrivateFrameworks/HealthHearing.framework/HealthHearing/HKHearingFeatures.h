@interface HKHearingFeatures : NSObject

@property (class, readonly) BOOL isHeadphoneExposureNotificationsEnabled;
@property (class, readonly) BOOL isHeadphoneExposureMeasureLevelsEnabled;
@property (class, readonly) BOOL areHeadphoneExposureNotificationsMandatory;
@property (class, readonly) BOOL isHeadphoneExposureNotificationsSupportedOnActiveWatch;

+ (id)sharedInstance;
+ (id)_numbersForPhonePreferenceKeys:(id)a0;
+ (BOOL)_setHeadphoneExposureMeasureLevelsEnabledOnActiveWatch:(BOOL)a0 error:(id *)a1;
+ (BOOL)_isHeadphoneExposureDataTransient;
+ (void)unitTesting_overrideForceDefaultHeadphoneDataCollectionInterval:(id)a0;
+ (BOOL)isHeadphoneExposureNotificationsEnabledOnActiveWatchWithError:(id *)a0;
+ (BOOL)_boolForPreferenceKey:(id)a0 defaultValue:(BOOL)a1 fromValues:(id)a2;
+ (BOOL)_setBoolForPreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (BOOL)_isMeasureOtherHeadphonesEnabledOnActiveWatchWithError:(id *)a0;
+ (BOOL)_isHeadphoneExposureDataTransientOnActiveWatchWithError:(id *)a0;
+ (BOOL)unitTesting_forceDefaultHeadphoneDataCollectionInterval;
+ (BOOL)_setHeadphoneExposureNotificationsEnabled:(BOOL)a0 error:(id *)a1;
+ (id)activePairedDevice;
+ (BOOL)_setBoolForPhonePreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (id)_numbersForPreferenceKeys:(id)a0 error:(id *)a1;
+ (id)_sharedAudioDataAnalysisManager;
+ (BOOL)setBoolForPreferenceKey:(id)a0 newValue:(BOOL)a1 forPairedWatch:(BOOL)a2 error:(id *)a3;
+ (void)unitTesting_overrideIsHeadphoneExposureNotificationsEnabled:(id)a0;
+ (BOOL)_setHeadphoneExposureNotificationsEnabledOnActiveWatch:(BOOL)a0 error:(id *)a1;
+ (void)startObserveringForChanges;
+ (id)_numbersForPreferenceKeys:(id)a0 fromActiveWatch:(BOOL)a1;
+ (BOOL)_setHeadphoneExposureMeasureLevelsEnabled:(BOOL)a0 error:(id *)a1;
+ (BOOL)areHeadphoneExposureNotificationsMandatoryOnActiveWatchWithError:(id *)a0;
+ (BOOL)_setBoolForWatchPreferenceKey:(id)a0 newValue:(BOOL)a1 error:(id *)a2;
+ (BOOL)hasActivePairedDevice;
+ (BOOL)_isMeasureOtherHeadphonesEnabled;
+ (BOOL)isHeadphoneExposureMeasureLevelsEnabledOnActiveWatchWithError:(id *)a0;
+ (id)_numbersForWatchPreferenceKeys:(id)a0;
+ (BOOL)unitTesting_simulateLocalHeadphonePlayback;
+ (void)unitTesting_overrideSimulateLocalHeadphonePlayback:(id)a0;

- (void)_startObservingForChanges;
- (id)init;
- (void)_startObservingForChangesOnActiveWatch;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)_adasPreferenceDidChange:(id)a0;
- (void)_stopObservingForChanges;

@end
