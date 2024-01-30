@class NSDate;

@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}

+ (BOOL)_tipStatusValidForLiftProcessing:(id)a0 contextualInfo:(id)a1 firstShownDate:(id)a2;
+ (id)_firstShownDateForTipStatus:(id)a0;
+ (id)_notifiedDateForTipStatus:(id)a0;
+ (id)_preHintRangeOutOfBoundsForIdentifier:(id)a0;
+ (id)_preHintUsageKeyForIdentifier:(id)a0;
+ (id)_usageEventsProcessedKeyForIdentifier:(id)a0;
+ (BOOL)_validateContextualInfo:(id)a0 forDisplayType:(unsigned long long)a1;

- (void)setCurrentDate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_calculateLift:(id)a0 completion:(id /* block */)a1;
- (void)_countsForPredicate:(id)a0 streamName:(id)a1 interval:(id)a2 userStore:(BOOL)a3 completion:(id /* block */)a4;
- (void)_saveHistoricalUsage:(id)a0 completion:(id /* block */)a1;
- (void)_savePreHintRangeOutOfBounds:(BOOL)a0 forIdentifier:(id)a1;
- (BOOL)_shouldCalculateLift:(id)a0;
- (void)processAnalytics:(id /* block */)a0;
- (void)resetAnalytics;

@end
