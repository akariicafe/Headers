@interface HDDatabaseDiagnosticOperation : HDDiagnosticOperation

- (void)run;
- (BOOL)allowsSensitiveAttachments;
- (id)reportFilename;
- (void)_reportStatsForDatabaseAtURL:(id)a0;
- (void)_reportSizeForHFDAtURL:(id)a0;
- (void)_reportJournalStatisticsInSubdirectory:(id)a0 profileDirectory:(id)a1;
- (void)_reportMedicalIDStatistics;
- (BOOL)_reportStatisticsForUnprotectedDatabaseAtURL:(id)a0 protectedDatabaseAtURL:(id)a1;
- (BOOL)_captureUnprotectedDatabaseAtURL:(id)a0 protectedDatabaseAtURL:(id)a1 reason:(id)a2;
- (void)_verifyPermissionsForFileAtURL:(id)a0;
- (void)_reportIntegrityForDatabase:(id)a0;
- (void)_checkSchemaVersionForDatabase:(id)a0 currentSchema:(int)a1 futureSchema:(int)a2;
- (void)_reportCountsForDatabase:(id)a0 entityClasses:(id)a1;
- (void)_reportMissingSourceOrderEntriesWithUnprotectedDatabase:(id)a0 protectedDatabase:(id)a1;
- (long long)_reportCountOfObjectsForEntityClass:(Class)a0 database:(id)a1;
- (long long)_reportCountOfObjectsInTable:(id)a0 database:(id)a1;

@end
