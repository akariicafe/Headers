@interface ATXPrivacyPreservingDates : NSObject

- (id)reduceGranularityToWeekOfYear:(id)a0;
- (double)convertDate:(id)a0 toDeltaFromSkyUpdateDate:(id)a1;
- (id)_reduceGranularityToDayOfYear:(id)a0;

@end
