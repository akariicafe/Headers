@interface MSASDaemonModel : MSASModelBase

+ (id)defaultModel;

- (id)nextActivityDateByPersonID;
- (BOOL)dbQueueUpgradeFromDatabaseVersion:(int)a0 currentVersion:(int)a1;
- (void)setNextActivityDate:(id)a0 forPersonID:(id)a1;
- (void)clearAllNextActivityDates;
- (id)init;
- (id)earliestNextActivityDate;

@end
