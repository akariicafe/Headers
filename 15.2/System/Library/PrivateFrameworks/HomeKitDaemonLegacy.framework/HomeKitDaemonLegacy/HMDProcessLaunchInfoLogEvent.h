@class NSString, NSDictionary;

@interface HMDProcessLaunchInfoLogEvent : HMMLogEvent <HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly) long long submissionState;
@property (readonly, copy, nonatomic) NSString *dataSyncState;
@property (readonly) double timeIntervalSincePreviousProcessLaunch;
@property (readonly) unsigned long long millisecondsSinceLaunchToDataSyncStateGood;
@property (readonly) long long numUncommittedRecords;
@property (readonly) long long numUncommittedAndPushedRecords;
@property (readonly, nonatomic) NSString *processExitType;
@property (readonly, nonatomic) NSString *processExitReason;
@property (readonly) unsigned long long processLaunchCount;
@property (readonly) unsigned long long processJetsamCount;
@property (readonly) unsigned long long processCrashCount;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)initWithSubmissionState:(long long)a0 dataSyncState:(id)a1 timeIntervalSincePreviousProcessLaunch:(double)a2 millisecondsSinceLaunchToDataSyncStateGood:(unsigned long long)a3 numUncommittedRecords:(long long)a4 numUncommittedAndPushedRecords:(long long)a5 processExitType:(id)a6 processExitReason:(id)a7 processLaunchCount:(unsigned long long)a8 processJetsamCount:(unsigned long long)a9 processCrashCount:(unsigned long long)a10;

@end
