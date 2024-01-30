@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence

+ (id)protectedDatabaseName;
+ (id)journalDatabaseName;

- (BOOL)protectedDataAvailable;
- (void)addAdditionalCriteriaToCleanupActivity:(id)a0;
- (BOOL)supportsJournaling;
- (void)finishJournalReconciliation:(unsigned long long)a0;

@end
