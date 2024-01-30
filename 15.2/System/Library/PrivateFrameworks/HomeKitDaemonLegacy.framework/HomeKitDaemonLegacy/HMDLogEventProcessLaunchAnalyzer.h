@class HMFTimer, NSString, NSDate, HMDEventCountersManager;
@protocol HMMLogEventSubmitting;

@interface HMDLogEventProcessLaunchAnalyzer : HMDLogEventAnalyzer <HMFTimerDelegate, HMDAggregationAnalysisEventContributing> {
    long long _launchInfoSubmissionState;
    NSDate *_processLaunchTime;
    NSDate *_processLastExitTime;
    NSString *_processExitType;
    NSString *_processExitReason;
    unsigned long long _numUncommittedRecords;
    unsigned long long _numUncommittedAndPushedRecords;
    NSString *_dataSyncStateAsString;
    double _timeIntervalSincePreviousProcessLaunch;
    unsigned long long _systemUptimeMillisecondsRecordedAtLaunch;
    unsigned long long _millisecondsSinceLaunchToDataSyncStateGood;
    BOOL _configurationLoaded;
}

@property (readonly) HMDEventCountersManager *eventCountersManager;
@property (readonly) id<HMMLogEventSubmitting> logEventSubmitter;
@property (readonly) HMFTimer *submitProcessLaunchInfoTimer;
@property (readonly) double processRelaunchEventTimeIntervalThreshold;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)managedEventCounterRequestGroups;

- (void)timerDidFire:(id)a0;
- (void).cxx_destruct;
- (void)didReceiveEventFromDispatcher:(id)a0;
- (void)populateAggregationAnalysisLogEvent:(id)a0;
- (void)resetAggregationAnalysisContext;
- (id)initWithProcessLaunchInfoTimer:(id)a0 eventCountersManager:(id)a1 logEventSubmitter:(id)a2;
- (void)handleProcessLaunchLogEvent:(id)a0;
- (void)handleDataSyncStateUpdateLogEvent:(id)a0;
- (void)submitProcessLaunchInfoEventPendingConfiguration;
- (void)updateProcessLaunchInfoFromDisk;
- (void)handleExitContextForHomed:(id)a0;
- (void)submitProcessLaunchEventWithCurrentAnalysis;

@end
