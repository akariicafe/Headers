@interface _DPDiagnosticDataReporter : NSObject

+ (void)clearScalarKey:(id)a0;
+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (void)setValue:(long long)a0 forScalarKey:(id)a1;
+ (id)blacklistFileCreationKey;
+ (id)blacklistFileRemovalKey;
+ (id)submittedRecordRemovalKey;
+ (id)staleRecordRemovalKey;
+ (id)staleReportFileRemovalKey;
+ (id)IOTrackingPrefix;
+ (void)addValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (id)budgetUpdateKey;
+ (id)diagnosticReportKeyFor:(id)a0 scalerKeyPrefix:(id)a1;
+ (void)setValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (void)clearDPKey:(id)a0 scalarKeyPrefix:(id)a1;
+ (id)daReportSubmissionKey;
+ (id)parsecReportSubmissionKey;

@end
