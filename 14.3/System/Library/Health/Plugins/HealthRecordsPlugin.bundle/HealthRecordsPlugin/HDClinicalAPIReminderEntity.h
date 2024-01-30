@interface HDClinicalAPIReminderEntity : HDHealthEntity

+ (id)entityEncoderForProfile:(id)a0 transaction:(id)a1 purpose:(long long)a2 encodingOptions:(id)a3 authorizationFilter:(id /* block */)a4;
+ (id)foreignKeys;
+ (const struct { id x0; id x1; unsigned char x2; } *)columnDefinitionsWithCount:(unsigned long long *)a0;
+ (id)databaseTable;
+ (id)joinClausesForProperty:(id)a0;
+ (long long)protectionClass;
+ (id)_queryForNextScheduledReminderInTransaction:(id)a0;
+ (id)_firstQueryResultAsReminder:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)_queryForLastPostedReminderInTransaction:(id)a0;
+ (id)_entityForAnyReminderWithSource:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (id)_predicateForReminderWithSourceBundleIdentifier:(id)a0;
+ (id)_reminderForSource:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)_reminderForSource:(id)a0 profile:(id)a1 error:(id *)a2;
+ (BOOL)_insertReminder:(id)a0 profile:(id)a1 transaction:(id)a2 error:(id *)a3;
+ (id)_entityForReminder:(id)a0 transaction:(id)a1 error:(id *)a2;
+ (BOOL)deleteRemindersForSourceWithBundleIdentifier:(id)a0 profile:(id)a1 error:(id *)a2;
+ (id)_predicateForReminderWithSourceEntity:(id)a0;
+ (id)_predicateForPostedReminders;
+ (id)_predicateForUnpostedReminders;
+ (id)_predicateForRemindersWithNotDeletedSources;
+ (id)nextScheduledReminderWithProfile:(id)a0 error:(id *)a1;
+ (id)lastPostedReminderWithProfile:(id)a0 error:(id *)a1;
+ (id)reminderForSource:(id)a0 createIfNecessary:(BOOL)a1 profile:(id)a2 error:(id *)a3;
+ (id)setReminderPosted:(id)a0 postDate:(id)a1 profile:(id)a2 error:(id *)a3;
+ (BOOL)deleteReminder:(id)a0 profile:(id)a1 error:(id *)a2;

- (id)_instantiateObjectWithProfile:(id)a0 transaction:(id)a1 error:(id *)a2;

@end
