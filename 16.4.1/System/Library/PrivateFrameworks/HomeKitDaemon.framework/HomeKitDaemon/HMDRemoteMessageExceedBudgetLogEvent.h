@class NSString;

@interface HMDRemoteMessageExceedBudgetLogEvent : HMMLogEvent <HMDDiagnosticReportLogging>

@property (readonly, copy) NSString *diagnosticReportEventType;
@property (readonly, copy) NSString *diagnosticReportEventSubType;
@property (readonly, nonatomic) struct _HMFRate { unsigned long long value; double period; } budgetRate;

+ (id)eventWithBudgetRate:(struct _HMFRate { unsigned long long x0; double x1; })a0;

@end
