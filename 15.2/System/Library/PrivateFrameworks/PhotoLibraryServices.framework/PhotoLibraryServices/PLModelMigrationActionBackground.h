@class PLModelMigratorLog, NSString, NSProgress, PLPhotoLibraryPathManager, PLLazyObject;

@interface PLModelMigrationActionBackground : NSObject <PLModelMigrationActionCore> {
    NSString *_resumeMarkerKeyPath;
    PLLazyObject *_lazyAppPrivateData;
}

@property (retain) PLPhotoLibraryPathManager *pathManager;
@property (retain) PLModelMigratorLog *logger;
@property (retain) NSProgress *progress;
@property (copy) id /* block */ continuationHandler;
@property (readonly) BOOL isCancelled;
@property (readonly) NSString *actionName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionDescription;
+ (id)shortenedMigrationActionClassName;
+ (long long)actionProgressWeight;

- (id)initWithPathManager:(id)a0 logger:(id)a1 progress:(id)a2 continuationHandler:(id /* block */)a3;
- (id)appPrivateData;
- (void)setup;
- (void)finalizeProgress;
- (void)setResumeMarkerValue:(id)a0;
- (id)resumeMarker;
- (BOOL)isCancelledWithResumeMarker:(id)a0 error:(id *)a1;
- (id)cancellableDiscreteProgressWithTotalUnitCount:(long long)a0 pendingParentUnitCount:(long long)a1 cancellationHandler:(id /* block */)a2;
- (void).cxx_destruct;

@end
