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
+ (long long)actionProgressWeight;
+ (id)shortenedMigrationActionClassName;

- (void)setup;
- (void).cxx_destruct;
- (id)appPrivateData;
- (id)cancellableDiscreteProgressWithTotalUnitCount:(long long)a0 pendingParentUnitCount:(long long)a1 cancellationHandler:(id /* block */)a2;
- (void)finalizeProgress;
- (id)initWithPathManager:(id)a0 logger:(id)a1 progress:(id)a2 continuationHandler:(id /* block */)a3;
- (BOOL)isCancelledWithResumeMarker:(id)a0 error:(id *)a1;
- (id)resumeMarker;
- (void)setResumeMarkerValue:(id)a0;

@end
