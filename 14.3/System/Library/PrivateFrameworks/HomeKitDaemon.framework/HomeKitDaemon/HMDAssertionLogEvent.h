@class NSUUID, NSString;

@interface HMDAssertionLogEvent : HMDLogEvent <HMDDiagnosticReportLogging> {
    NSString *_description;
}

@property (class, readonly, copy) NSUUID *identifier;

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, copy) NSString *reason;

- (id)initWithReason:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)updateDiagnosticReportSignature:(id)a0;

@end
