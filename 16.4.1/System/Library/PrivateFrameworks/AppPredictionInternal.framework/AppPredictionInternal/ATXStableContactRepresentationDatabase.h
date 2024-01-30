@interface ATXStableContactRepresentationDatabase : ATXAbstractVersionedDatabase

- (BOOL)migrate;
- (id)deleteAllData;
- (id)stableContactIdentifier:(id)a0;
- (id)cnContactId:(id)a0;
- (long long)latestVersion;
- (BOOL)_runMigrationSteps:(id)a0;
- (void)insertCnContactIdToStableContactIdentifierWithCnContactId:(id)a0 stableContactIdentifier:(id)a1;
- (id)init;

@end
