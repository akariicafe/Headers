@interface HDAlarmEventEntity : HDHealthEntity

+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (BOOL)enumerateAllAlarmEventsWithClientIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2 enumerationHandler:(id /* block */)a3;
+ (long long)protectionClass;
+ (id)uniquedColumns;
+ (BOOL)insertOrReplaceAlarmEvents:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)checkConstraints;
+ (BOOL)deleteAllAlarmEventsWithClientIdentifier:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteAlarmEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)enumerateAllAlarmEventsWithTransaction:(id)a0 error:(id *)a1 enumerationHandler:(id /* block */)a2;
+ (id)insertOrReplaceAlarmEvent:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteAlarmEvents:(id)a0 transaction:(id)a1 error:(id *)a2;

- (id)alarmEventWithTransaction:(id)a0 error:(id *)a1;

@end
