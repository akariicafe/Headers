@interface CKSQLiteDatabaseActivities : CKSQLiteTable

+ (Class)entryClass;
+ (id)dbProperties;

- (id)wakeFromDatabase;
- (id)activitiesStartingBeforeDate:(id)a0;
- (id)deleteCompletedActivities;
- (id)deleteEntriesForDatabase:(id)a0;
- (id)earliestActivityDate;
- (id)fetchActivityForTarget:(id)a0;
- (BOOL)hasPendingActivities:(id *)a0;
- (id)insertOrUpdateActivityDate:(id)a0;

@end
