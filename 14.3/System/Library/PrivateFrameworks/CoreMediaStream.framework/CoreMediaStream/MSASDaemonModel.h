@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (id)init;
- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (id)earliestNextActivityDate;
- (id)nextActivityDateByPersonID;
- (void)clearAllNextActivityDates;

@end
