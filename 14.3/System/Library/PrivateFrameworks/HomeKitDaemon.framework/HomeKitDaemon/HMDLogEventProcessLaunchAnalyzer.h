@class NSString, NSDate;
@protocol HMDLogEventProcessLaunchAnalyzerContext;

@interface HMDLogEventProcessLaunchAnalyzer : HMDLogEventAnalyzer <HMFTimerDelegate> {
    BOOL _processLaunchInfoSubmitStatus;
    NSDate *_processLaunchTime;
    NSString *_dataSyncStateAsString;
    NSString *_jetsamReason;
    long long _previousPID;
    double _timeSincePreviousProcessLaunch;
    double _timeSinceLaunchToDataSyncStateGood;
}

@property (readonly) double processRelaunchEventTimeIntervalThreshold;
@property (readonly) id<HMDLogEventProcessLaunchAnalyzerContext> context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)timerDidFire:(id)a0;
- (id)initWithSupportedEventTypes:(id)a0 context:(id)a1;
- (void)processLogEvent:(id)a0;
- (void)_handleDataSyncStateUpdateLogEvent:(id)a0;
- (void)_handleProcessLaunchLogEvent:(id)a0;
- (void)_updateProcessLaunchInfoFromDisk;
- (void)_readJetsamSnapshotEntryForHomed;

@end
