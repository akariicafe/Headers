@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (BOOL)migrate;
- (long long)latestVersion;
- (id)deleteAllData;
- (id)init;
- (BOOL)_runMigrationSteps:(id)a0;
- (id)stableContactIdentifier:(id)a0;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)cnContactId:(id)a0;

@end
