@class NSMutableDictionary;

@interface HDHeartDailyAnalytics : NSObject {
    NSMutableDictionary *_payload;
}

- (id)init;
- (void).cxx_destruct;
- (void)submit;
- (void)updateIrregularRhythmNotificationClassificationCount:(long long)a0;
- (void)updateIsIrnOnboarded:(BOOL)a0;
- (void)updateIsEcgOnboarded:(BOOL)a0;
- (void)updateECGActiveAlgorithmVersion:(id)a0;
- (void)updateECGUpdateVersionPhone:(id)a0;
- (void)updateECGUpdateVersionWatch:(id)a0;
- (void)updateCountMobileAssetsDownloadedPast24Hours:(long long)a0;
- (void)updateMobileAssetNamesDownloadedPast24Hours:(id)a0;
- (void)updateIsImproveHealthAndActivityAllowed:(BOOL)a0;
- (void)updateIsTachycardiaDetectionEnabled:(BOOL)a0;
- (void)updateIsBradycardiaDetectionEnabled:(BOOL)a0;
- (void)updateActiveWatchProductType:(id)a0;
- (void)updateElectrocardiogramClassificationCount:(long long)a0;
- (void)updateCountRecordedTachogramsPast24Hours:(long long)a0;
- (void)updateCountAnalyzedTachogramsPast24Hours:(long long)a0;
- (void)updateECGOnboardingCountryCode:(id)a0;
- (void)updateIRNOnboardingCountryCode:(id)a0;
- (void)updateWasWatchWornPast24Hours:(BOOL)a0;
- (void)updateWeeksSinceElectrocardiogramOnboardedWithFirstOnboardingCompletedDate:(id)a0;
- (void)updateWithElectrocardiogramClassifications:(id)a0 isWithin24HoursPostIRN:(BOOL)a1;
- (id)_weeksBetweenStartDate:(id)a0 endDate:(id)a1;
- (id)_ecgClassificationWithin24HoursPostIRNKeyFromClassification:(unsigned long long)a0;
- (id)_ecgClassificationWithin24HoursKeyFromClassification:(unsigned long long)a0;

@end
