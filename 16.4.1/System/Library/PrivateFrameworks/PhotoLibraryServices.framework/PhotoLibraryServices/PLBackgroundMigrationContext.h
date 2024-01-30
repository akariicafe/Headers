@class NSString, PLDatabaseContext, PLCoreAnalyticsEventManager, PLPhotoLibraryPathManager;

@interface PLBackgroundMigrationContext : NSObject <PLModelMigrationContext>

@property (retain, nonatomic) PLCoreAnalyticsEventManager *analyticsEventManager;
@property (retain, nonatomic) PLDatabaseContext *databaseContext;
@property (retain, nonatomic) PLPhotoLibraryPathManager *pathManager;
@property unsigned int policy;
@property long long libraryIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPathManager:(id)a0 databaseContext:(id)a1 analyticsEventManager:(id)a2;

@end
