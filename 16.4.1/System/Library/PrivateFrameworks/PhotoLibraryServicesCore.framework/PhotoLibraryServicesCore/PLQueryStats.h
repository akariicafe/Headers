@class NSManagedObjectContext, NSSQLiteDatabaseStatistics;

@interface PLQueryStats : NSObject {
    NSManagedObjectContext *_context;
    NSSQLiteDatabaseStatistics *_preStats;
}

+ (id)startedQueryStatsWithContext:(id)a0;
+ (BOOL)allowedToTrack;
+ (id)byteCountFormatter;

- (id)initWithContext:(id)a0;
- (void).cxx_destruct;
- (id)stopRecordingDescriptionWithFetchCount:(long long)a0;

@end
