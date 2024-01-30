@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence

+ (id)journalDatabaseName;
+ (id)protectedDatabaseName;

- (void)finishJournalReconciliation:(unsigned long long)a0;
- (BOOL)supportsJournaling;
- (BOOL)protectedDataAvailable;
- (void)addAdditionalCriteriaToCleanupActivity:(id)a0;

@end
