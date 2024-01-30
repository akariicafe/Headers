@class NSString, NSDictionary;

@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithHistogrammedAggregateHomeDataCommonDimensions;
@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;

@property (readonly) long long submissionState;
@property (readonly, copy, nonatomic) NSString *dataSyncState;
@property (readonly) unsigned long long systemUptimeMillisecondsAtLaunch;
@property (readonly) double timeIntervalSincePreviousProcessLaunch;
@property (readonly) unsigned long long homeDataLoadedMilliseconds;
@property (readonly) unsigned long long xpcMessageTransportReadyMilliseconds;
@property (readonly) unsigned long long millisecondsSinceLaunchToDataSyncStateGood;
@property (readonly) unsigned long long millisecondsToAccountResolved;
@property (readonly) long long numUncommittedRecords;
@property (readonly) long long numUncommittedAndPushedRecords;
@property (readonly, nonatomic) NSString *processExitType;
@property (readonly, nonatomic) NSString *processExitReason;
@property (readonly) unsigned long long processLaunchCount;
@property (readonly) unsigned long long processJetsamCount;
@property (readonly) unsigned long long processCrashCount;
@property (readonly) BOOL isConfigurationLoaded;
@property (readonly) BOOL isTTSUInProgress;
@property (readonly) BOOL eventSubmittedOnTimeOut;
@property (readonly, nonatomic) NSString *coreAnalyticsEventName;
@property (readonly, nonatomic) NSDictionary *coreAnalyticsEventDictionary;
@property (readonly, nonatomic) NSString *accessoryIdentifier;
@property (readonly, nonatomic) BOOL logEventWithAppendedCommonDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (void).cxx_destruct;
- (id)initWithSubmissionState:(long long)a0 dataSyncState:(id)a1 timeIntervalSincePreviousProcessLaunch:(double)a2 millisecondsToHomeDataLoad:(unsigned long long)a3 millisecondsToXPCMessageTransportReady:(unsigned long long)a4 millisecondsSinceLaunchToDataSyncStateGood:(unsigned long long)a5 millisecondsToAccountResolved:(unsigned long long)a6 numUncommittedRecords:(long long)a7 numUncommittedAndPushedRecords:(long long)a8 processExitType:(id)a9 processExitReason:(id)a10 processLaunchCount:(unsigned long long)a11 processJetsamCount:(unsigned long long)a12 processCrashCount:(unsigned long long)a13 isConfigurationLoaded:(BOOL)a14 isTTSUInProgress:(BOOL)a15;

@end
