@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (void)clearAllNextActivityDates;
- (id)earliestNextActivityDate;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (id)init;
- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (id)nextActivityDateByPersonID;

@end
