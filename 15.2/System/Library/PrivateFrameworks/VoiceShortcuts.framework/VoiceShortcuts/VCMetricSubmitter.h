@class WFMetricStatusEvent, VCMetricCheckIn;
@protocol WFDatabaseProvider;

@interface VCMetricSubmitter : NSObject

@property (readonly, nonatomic) VCMetricCheckIn *checkIn;
@property (readonly, nonatomic) id<WFDatabaseProvider> databaseProvider;
@property (readonly, nonatomic) WFMetricStatusEvent *event;

+ (id)activityIdentifier;
+ (void)scheduleWithDatabaseProvider:(id)a0;
+ (void)scheduleWithScheduler:(id)a0 databaseProvider:(id)a1;
+ (void)performWithDatabaseProvider:(id)a0;

- (BOOL)isAppInstalled;
- (void).cxx_destruct;
- (void)perform;
- (id)initWithDatabaseProvider:(id)a0;
- (id)initWithCheckIn:(id)a0 event:(id)a1 databaseProvider:(id)a2;
- (BOOL)isSharingEnabled;
- (BOOL)isSleepEnabled;
- (BOOL)personalAutomationsPresent:(id)a0;
- (BOOL)homeAutomationsPresent:(id *)a0;
- (unsigned int)averageShortcutCountPerFolder:(id)a0;
- (unsigned int)shortcutsCount:(id)a0;
- (unsigned int)uncategorizedShortcutCount:(id)a0;
- (unsigned int)watchShortcutCount:(id)a0;
- (unsigned int)folderCount:(id)a0;
- (unsigned int)numberOfPersonalAutomationsEnabled:(id)a0;
- (BOOL)addAutomationSuggestionMetricsToEvent:(id)a0 database:(id)a1 error:(id *)a2;
- (unsigned int)numberOfShortcutRuns:(id)a0;
- (unsigned int)numberOfAppSessions:(id *)a0;
- (unsigned int)sleepShortcutCount:(id)a0;
- (BOOL)addWidgetMetricsToEvent:(id)a0 error:(id *)a1;

@end
