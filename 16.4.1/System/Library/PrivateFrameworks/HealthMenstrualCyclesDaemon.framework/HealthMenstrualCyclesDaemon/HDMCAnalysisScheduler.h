@class HKMCSettingsManager, NSString, HKCalendarCache, HDMCAnalysisManager;

@interface HDMCAnalysisScheduler : NSObject <HDHealthDaemonReadyObserver> {
    HDMCAnalysisManager *_analysisManager;
    HKMCSettingsManager *_settingsManager;
    HKCalendarCache *_calendarCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void)_handleActivity:(id)a0 forceRescheduleOnCheckIn:(BOOL)a1;
- (double)_delayUntilNextAnalysisSchedulingWindowStartDateAfterDate:(id)a0;
- (void)_registerActivityAfterCompletion:(BOOL)a0;
- (id)initWithDaemon:(id)a0 analysisManager:(id)a1 settingsManager:(id)a2 calendarCache:(id)a3;
- (void)dealloc;
- (void)_runAnalysis;
- (void).cxx_destruct;

@end
