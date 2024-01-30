@interface _DPDiagnosticDataReporter : NSObject

+ (id)staleRecordRemovalKey;
+ (id)submittedRecordRemovalKey;
+ (id)parsecReportSubmissionKey;
+ (id)staleReportFileRemovalKey;
+ (id)diagnosticReportKeyFor:(id)a0 scalerKeyPrefix:(id)a1;
+ (id)blacklistFileRemovalKey;
+ (void)addValue:(long long)a0 forScalarKey:(id)a1;
+ (void)setValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (id)budgetUpdateKey;
+ (void)addValue:(long long)a0 forDPKey:(id)a1 scalarKeyPrefix:(id)a2;
+ (void)clearScalarKey:(id)a0;
+ (id)blacklistFileCreationKey;
+ (id)daReportSubmissionKey;
+ (void)setValue:(long long)a0 forScalarKey:(id)a1;
+ (id)IOTrackingPrefix;
+ (void)clearDPKey:(id)a0 scalarKeyPrefix:(id)a1;

@end
