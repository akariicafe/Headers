@class NSString;

@interface HMDLogEventCoreDataSignificantEvent : HMMLogEvent <HMDDiagnosticReportLogging>

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, nonatomic) unsigned long long reason;
@property (retain, nonatomic) NSString *context;
@property (copy, nonatomic) NSString *extraContext;

- (void).cxx_destruct;
- (id)initWithReason:(unsigned long long)a0;
- (id)initWithReason:(unsigned long long)a0 author:(unsigned long long)a1;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
