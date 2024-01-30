@class NSDate;

@interface TPSAnalyticsUsageEventsProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}

+ (id)_firstShownDateForTipStatus:(id)a0;
+ (id)_preHintRangeOutOfBoundsForIdentifier:(id)a0;
+ (id)_preHintUsageKeyForIdentifier:(id)a0;
+ (BOOL)_tipStatusValidForLiftProcessing:(id)a0 contextualInfo:(id)a1 firstShownDate:(id)a2;
+ (id)_usageEventsProcessedKeyForIdentifier:(id)a0;

- (void)processAnalytics:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_saveHistoricalUsage:(id)a0 completion:(id /* block */)a1;
- (void)resetAnalytics;
- (void)setCurrentDate:(id)a0;
- (void)_savePreHintRangeOutOfBounds:(BOOL)a0 forIdentifier:(id)a1;
- (void)_countsForPredicate:(id)a0 streamName:(id)a1 interval:(id)a2 completion:(id /* block */)a3;
- (void)_calculateLift:(id)a0 completion:(id /* block */)a1;

@end
