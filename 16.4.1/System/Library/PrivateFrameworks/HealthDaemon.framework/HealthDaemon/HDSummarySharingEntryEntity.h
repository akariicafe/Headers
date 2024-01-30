@interface HDSummarySharingEntryEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)propertyForSyncProvenance;
+ (long long)protectionClass;
+ (BOOL)updateStatus:(long long)a0 dateModified:(id)a1 dateAccepted:(id)a2 predicate:(id)a3 profile:(id)a4 error:(id *)a5;
+ (id)indices;
+ (BOOL)enumerateCodableEntriesWithPredicate:(id)a0 profile:(id)a1 error:(id *)a2 handler:(id /* block */)a3;
+ (void)updatePauseStateForEntryWithUUID:(id)a0 shouldPause:(BOOL)a1;
+ (id)codableWithRow:(struct HDSQLiteRow { } *)a0;
+ (id)anyWithUUID:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)updateOwnerParticipant:(id)a0 cloudKitIdentifier:(id)a1 predicate:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)updateNotificationStatusForInvitiationWithUUID:(id)a0 newNotificationStatus:(long long)a1 dateModified:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)_propertiesForEntity;
+ (BOOL)insertOrReplaceCodableEntry:(id)a0 CNContactIdentifier:(id)a1 shouldPause:(BOOL)a2 syncProvenance:(long long)a3 transaction:(id)a4 error:(id *)a5;
+ (BOOL)enumerateCodableEntriesWithPredicate:(id)a0 transaction:(id)a1 error:(id *)a2 handler:(id /* block */)a3;

@end
