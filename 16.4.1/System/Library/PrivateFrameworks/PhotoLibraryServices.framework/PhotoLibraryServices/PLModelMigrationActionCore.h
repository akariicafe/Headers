@class PLModelMigratorLog, NSString, NSProgress, PLPhotoLibraryPathManager;

@interface PLModelMigrationActionCore : NSObject <PLModelMigrationActionCore>

@property (retain) PLPhotoLibraryPathManager *pathManager;
@property (retain) PLModelMigratorLog *logger;
@property (retain) NSProgress *progress;
@property unsigned short startingSchemaVersion;
@property (readonly) NSString *actionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionDescription;
+ (long long)actionProgressWeight;
+ (id)shortenedMigrationActionClassName;

- (void)setup;
- (void).cxx_destruct;
- (id)cancellableDiscreteProgressWithTotalUnitCount:(long long)a0 pendingParentUnitCount:(long long)a1 cancellationHandler:(id /* block */)a2;
- (void)finalizeProgress;
- (id)initWithPathManager:(id)a0 startingSchemaVersion:(unsigned short)a1 logger:(id)a2 progress:(id)a3;
- (BOOL)isCancelledWithError:(id *)a0;

@end
