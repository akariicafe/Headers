@class NSNumber, NSURL, NSString;

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *latency;
@property (copy, nonatomic) NSURL *uri;
@property (copy, nonatomic) NSString *verb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)latencyDiagnosticReportDiagnosticReport;
+ (id)latencyDiagnosticReportDiagnosticReportWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
