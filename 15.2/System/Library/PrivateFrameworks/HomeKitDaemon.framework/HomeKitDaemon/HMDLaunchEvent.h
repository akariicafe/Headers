@class NSString, NSDictionary, NSDate, HMFActivity;

@interface HMDLaunchEvent : HMMLogEvent <HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging> {
    NSDate *_XPCMessageTransportStartedDate;
}

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly) double diagnosticReportThreshold;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (retain) HMFActivity *activity;
@property (readonly) unsigned long long systemUptimeMillisecondsRecordedAtLaunch;
@property BOOL hasUncommittedRecords;
@property BOOL hasUncommittedAndPushedRecords;
@property long long numUncommittedRecords;
@property long long numUncommittedAndPushedRecords;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;


- (void).cxx_destruct;
- (id)init;
- (void)markXPCMessageTransportStarted;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
