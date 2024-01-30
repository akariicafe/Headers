@class NSString, NSDictionary;

@interface HMDMemoryLogEvent : HMMLogEvent <HMDDiagnosticReportLogging, HMMCoreAnalyticsLogging>

@property (class, readonly) BOOL submitEventWithDurationInMilliseconds;
@property (class, readonly) BOOL submitEventWithHistogrammedCommonConfigurationDimensions;

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, nonatomic) NSString *reason;
@property (readonly) unsigned long long memoryUsage;
@property (readonly) unsigned long long maxMemoryUsage;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly, nonatomic) NSDictionary *serializedEvent;
@property (readonly, nonatomic) NSString *accessoryIdentifier;

+ (id)memoryLogEventWithReason:(id)a0 memoryUsage:(unsigned long long)a1 maxMemoryUsage:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)init;
- (id)__initWithReason:(id)a0 memoryUsage:(unsigned long long)a1 maxMemoryUsage:(unsigned long long)a2;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
