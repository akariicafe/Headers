@interface HDAlarmEventEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)checkConstraints;
+ (BOOL)enumerateAllAlarmEventsWithClientIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (BOOL)enumerateAllAlarmEventsWithTransaction:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
+ (id)insertOrReplaceAlarmEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)insertOrReplaceAlarmEvents:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)uniquedColumns;
+ (BOOL)enumerateAllAlarmEventsWithTransaction:(id)a0 predicate:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (id)_alarmEventFromAllPropertiesRow:(struct HDSQLiteRow { } *)a0;
+ (BOOL)deleteAlarmEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteAlarmEvents:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteAllAlarmEventsWithClientIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (long long)protectionClass;

- (id)alarmEventWithTransaction:(id)a0 error:(id *)a1;

@end
