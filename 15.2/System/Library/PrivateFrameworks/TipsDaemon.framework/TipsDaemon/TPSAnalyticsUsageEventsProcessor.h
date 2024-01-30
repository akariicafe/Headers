@class NSDate;

@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}

+ (id)_firstShownDateForTipStatus:(id)a0;
+ (BOOL)_tipStatusValidForLiftProcessing:(id)a0 contextualInfo:(id)a1 firstShownDate:(id)a2;
+ (id)_preHintRangeOutOfBoundsForIdentifier:(id)a0;
+ (id)_usageEventsProcessedKeyForIdentifier:(id)a0;
+ (id)_preHintUsageKeyForIdentifier:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)setCurrentDate:(id)a0;
- (void)processAnalytics:(id /* block */)a0;
- (void)resetAnalytics;
- (void)_savePreHintRangeOutOfBounds:(BOOL)a0 forIdentifier:(id)a1;
- (void)_saveHistoricalUsage:(id)a0 completion:(id /* block */)a1;
- (void)_calculateLift:(id)a0 completion:(id /* block */)a1;
- (void)_countsForPredicate:(id)a0 streamName:(id)a1 interval:(id)a2 userStore:(BOOL)a3 completion:(id /* block */)a4;

@end
