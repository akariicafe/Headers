@class NSUUID, NSString, NSNumber;

@interface HMDMemoryLogEvent : HMDLogEvent <HMDCoreAnalyticsLogging, HMDDiagnosticReportLogging>

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSNumber *memoryUsage;
@property (readonly, nonatomic) NSNumber *maxMemoryUsage;

+ (id)memoryLogEventWithReason:(id)a0 memoryUsage:(id)a1 maxMemoryUsage:(id)a2;

- (id)eventName;
- (id)init;
- (void).cxx_destruct;
- (id)serializedEvent;
- (BOOL)shouldSubmitEvent;
- (id)__initWithReason:(id)a0 memoryUsage:(id)a1 maxMemoryUsage:(id)a2;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
