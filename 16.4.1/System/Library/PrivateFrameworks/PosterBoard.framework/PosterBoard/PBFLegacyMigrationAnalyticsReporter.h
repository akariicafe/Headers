@interface PBFLegacyMigrationAnalyticsReporter : NSObject

+ (void)recordWithEvent:(long long)a0 migrationInfo:(id)a1 duration:(double)a2 errorCode:(long long)a3;

- (id)init;

@end
