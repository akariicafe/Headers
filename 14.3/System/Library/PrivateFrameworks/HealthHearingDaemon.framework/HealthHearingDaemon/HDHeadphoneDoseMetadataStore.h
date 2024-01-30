@class HDKeyValueDomain, HDProfileIdentifier, HDProfile;

@interface HDHeadphoneDoseMetadataStore : NSObject {
    HDProfile *_profile;
    HDKeyValueDomain *_domain;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _doseLimit;
    BOOL _shouldLoadDoseLimitOverride;
}

@property (readonly, nonatomic) HDProfileIdentifier *_profileIdentifier;

+ (id)_earliestFireDateAllowedWithNow:(id)a0;

- (id)initWithProfile:(id)a0;
- (BOOL)rebuildPreviousSevenDayNotificationFireDateIfNeededWithError:(id *)a0;
- (id)_infoForSevenDayDoseAtFireDate:(id)a0;
- (BOOL)shouldNotifyUserForAccumulatedDose:(double)a0;
- (void).cxx_destruct;
- (id)_fetchPreviousSevenDayNotificationFireDateWithError:(id *)a0;
- (BOOL)_shouldRebuildSevenDayStatisticsWithError:(id *)a0;
- (id)_mostRecentSevenDayNotificationFowNow:(id)a0 error:(id *)a1;
- (id)_infoForAccumulatedDoseAtFireDate:(id)a0;
- (id)_fetchPreviousSevenDayNotificationFireDateWithNow:(id)a0 error:(id *)a1;
- (long long)_updatePreviousSevenDayNotificationFireDateWithSamplesInserted:(id)a0 now:(id)a1 error:(id *)a2;
- (BOOL)_setShouldRebuildPreviousSevenDayNotification:(BOOL)a0 error:(id *)a1;
- (BOOL)didNotifyWithFireDate:(id)a0 error:(id *)a1;
- (BOOL)rebuildPreviousSevenDayNotificationFireDateWithError:(id *)a0;
- (void)_lock_loadDoseLimitOverride;
- (void)_lock_loadDoseLimitOverrideIfNeeded;
- (BOOL)_rebuildPreviousSevenDayNotificationFireDateWithNow:(id)a0 error:(id *)a1;
- (id)_lock_fetchDoseLimitInfoWithError:(id *)a0;
- (BOOL)_overrideDoseLimit:(id)a0 error:(id *)a1;
- (id)_info;
- (id)_fetchDoseLimitInfoWithError:(id *)a0;
- (BOOL)_didNotifyWithFireDate:(id)a0 changed:(BOOL *)a1 error:(id *)a2;
- (long long)updatePreviousSevenDayNotificationFireDateWithSamplesInserted:(id)a0 error:(id *)a1;
- (BOOL)_setPreviousSevenDayNotificationFireDate:(id)a0 error:(id *)a1;
- (BOOL)_clearPreviousSevenDayNotificationFireDateWithError:(id *)a0;
- (BOOL)_setShouldRebuildSevenDayStatistics:(BOOL)a0 error:(id *)a1;
- (id)collectionIntervalForDoseAccumulated:(double)a0;
- (BOOL)_shouldRebuildPreviousSevenDayNotificationWithError:(id *)a0;

@end
