@class NSString, CalMigrationToolOptions;
@protocol CalCalendarMigrationDefaultsProvider;

@interface CalMigrationToolCalendarMigrationDefaultsProvider : NSObject <CalCalendarMigrationDefaultsProvider>

@property (readonly, nonatomic) CalMigrationToolOptions *toolOptions;
@property (readonly, nonatomic) id<CalCalendarMigrationDefaultsProvider> defaultProvider;
@property (readonly, nonatomic) BOOL shouldPerformMigration;
@property (readonly, nonatomic) BOOL shouldBackupBeforeMigration;
@property (readonly, nonatomic) BOOL shouldDeleteMigratedData;
@property (readonly, nonatomic) BOOL isHolidayCalendarEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)clearLegacyDefaults;
- (id)initWithToolOptions:(id)a0 defaultProvider:(id)a1;

@end
