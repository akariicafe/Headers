@interface HDSyncAnchorEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)uniquedColumns;
+ (long long)protectionClass;
+ (long long)syncAnchorOfType:(long long)a0 entityIdentifier:(id)a1 store:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)resetSyncAnchorsOfType:(long long)a0 store:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)updateSyncAnchorsWithMap:(id)a0 type:(long long)a1 store:(id)a2 updatePolicy:(long long)a3 resetInvalid:(BOOL)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)resetAllSyncAnchorsOfType:(long long)a0 syncProvenances:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (BOOL)setAcknowledgedAnchorsWithMap:(id)a0 store:(id)a1 resetNext:(BOOL)a2 resetInvalid:(BOOL)a3 profile:(id)a4 error:(id *)a5;
+ (BOOL)getSyncAnchorsOfType:(long long)a0 anchorMap:(id)a1 store:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)resetSyncStore:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)updateSyncAnchorsWithMap:(id)a0 type:(long long)a1 updateDate:(id)a2 store:(id)a3 updatePolicy:(long long)a4 resetInvalid:(BOOL)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)getMinimumSyncAnchorsOfType:(long long)a0 anchorMap:(id)a1 updatedSince:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)updateSyncAnchor:(long long)a0 type:(long long)a1 entityIdentifier:(id)a2 store:(id)a3 updatePolicy:(long long)a4 profile:(id)a5 error:(id *)a6;
+ (BOOL)resetNextAnchorsIfNeededForStore:(id)a0 profile:(id)a1 minimumElapsedTime:(double)a2 error:(id *)a3;
+ (BOOL)prepareSyncAnchorsForEntityIdentifiers:(id)a0 store:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)_getAnchorsForProperty:(id)a0 anchorMap:(id)a1 store:(id)a2 profile:(id)a3 error:(id *)a4;
+ (id)_predicateForSyncEntityIdentifier:(id)a0 syncStore:(id)a1;
+ (long long)_syncAnchorForProperty:(id)a0 entityIdentifier:(id)a1 store:(id)a2 profile:(id)a3 error:(id *)a4;
+ (BOOL)_setSyncAnchor:(long long)a0 updateDate:(double)a1 options:(unsigned long long)a2 updatePolicy:(long long)a3 entityIdentifier:(id)a4 store:(id)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)_setAnchorsWithMap:(id)a0 updateDate:(double)a1 store:(id)a2 updateOptions:(unsigned long long)a3 updatePolicy:(long long)a4 resetInvalid:(BOOL)a5 profile:(id)a6 error:(id *)a7;
+ (id)_predicateForSyncStore:(id)a0;
+ (BOOL)_setSyncAnchor:(long long)a0 updateDate:(double)a1 options:(unsigned long long)a2 updatePolicy:(long long)a3 entityIdentifier:(id)a4 store:(id)a5 transaction:(id)a6 error:(id *)a7;
+ (BOOL)resetNextAnchorsForStore:(id)a0 updateDate:(double)a1 minimumElapsedTime:(double)a2 transaction:(id)a3 error:(id *)a4;
+ (id)_predicateForSyncEntityIdentifier:(id)a0;
+ (BOOL)updateSyncAnchor:(long long)a0 type:(long long)a1 updateDate:(id)a2 entityIdentifier:(id)a3 store:(id)a4 updatePolicy:(long long)a5 profile:(id)a6 error:(id *)a7;
+ (BOOL)enumerateSyncAnchorsForStoreID:(long long)a0 database:(id)a1 error:(id *)a2 handler:(id /* block */)a3;

@end
