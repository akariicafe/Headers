@class NSString;

@interface HMDAssertionLogEvent : HMMLogEvent <HMDDiagnosticReportLogging> {
    NSString *_description;
}

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *reason;

- (id)description;
- (void).cxx_destruct;
- (id)initWithReason:(id)a0;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
