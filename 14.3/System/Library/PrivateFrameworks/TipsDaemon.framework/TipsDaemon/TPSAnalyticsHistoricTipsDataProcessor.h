@class NSDate;

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}

- (void)processAnalytics:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (id)_furthestLookbackDate;
- (unsigned long long)_daysBetweenDate:(id)a0 andOtherDate:(id)a1;
- (void)resetAnalytics;
- (void)updateDisplayedCount:(long long *)a0 andFrequencyControlCount:(long long *)a1 forTipStatus:(id)a2 andLookbackDate:(id)a3;
- (BOOL)_shouldProceedWithCrunching;

@end
