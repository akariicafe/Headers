@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence

+ (id)protectedDatabaseName;
+ (id)journalDatabaseName;

- (void)addAdditionalCriteriaToCleanupActivity:(id)a0;
- (BOOL)supportsJournaling;
- (BOOL)protectedDataAvailable;
- (void)finishJournalReconciliation:(unsigned long long)a0;

@end
