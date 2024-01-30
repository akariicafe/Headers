@class NSUUID, NSString, NSDate, HMFActivity;

@interface HMDLaunchEvent : HMDLogEvent <HMDDiagnosticReportLogging, HMDCoreAnalyticsLogging> {
    NSDate *_XPCMessageTransportStartedDate;
}

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly) double diagnosticReportThreshold;
@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (retain) HMFActivity *activity;

- (id)eventName;
- (id)init;
- (void).cxx_destruct;
- (id)serializedEvent;
- (void)markXPCMessageTransportStarted;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
