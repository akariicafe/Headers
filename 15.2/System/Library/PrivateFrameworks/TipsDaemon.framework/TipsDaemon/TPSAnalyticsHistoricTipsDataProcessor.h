@class NSDate;

@interface TPSAnalyticsHistoricTipsDataProcessor : TPSAnalyticsProcessor {
    NSDate *_currentDate;
}

- (void).cxx_destruct;
- (id)init;
- (void)processAnalytics:(id /* block */)a0;
- (void)resetAnalytics;
- (BOOL)_shouldProceedWithCrunching;
- (id)_furthestLookbackDate;
- (void)updateDisplayedCount:(long long *)a0 andFrequencyControlCount:(long long *)a1 forTipStatus:(id)a2 andLookbackDate:(id)a3;
- (unsigned long long)_daysBetweenDate:(id)a0 andOtherDate:(id)a1;

@end
