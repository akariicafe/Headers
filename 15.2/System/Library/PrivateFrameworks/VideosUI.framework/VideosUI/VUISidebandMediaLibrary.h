@class NSPersistentContainer, NSManagedObjectContext, NSObject;
@protocol OS_dispatch_queue;

@interface VUISidebandMediaLibrary : VUIDeviceMediaLibrary

@property (retain, nonatomic) NSPersistentContainer *persistentContainer;
@property (retain, nonatomic) NSManagedObjectContext *backgroundManagedObjectContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

+ (void)initialize;
+ (void)setDeleteAllVideosAndKeysOnInitializationForAppRemoval:(BOOL)a0;

- (id)initWithManager:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (void)dealloc;
- (id)enqueueFetchRequests:(id)a0 completionHandler:(id /* block */)a1;
- (void)_dumpDatabaseToLogIfEnabled;
- (void)_migrateVideoExpirationDateAndAllowsManualRenewal;
- (void)_mainQueueManagedObjectContextDidSave:(id)a0;
- (void)_activeAccountDidChange:(id)a0;
- (void)_pruneVideosAtAppLaunchWithCompletion:(id /* block */)a0;
- (id)_movieForCanonicalID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)_tvEpisodeForCanonicalID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)_tvSeriesForCanonicalID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)imageInfoForSeries:(id)a0 imageType:(unsigned long long)a1 createIfNeeded:(BOOL)a2 wasCreated:(BOOL *)a3;
- (id)_tvSeasonForCanonicalID:(id)a0 createIfNeeded:(BOOL)a1 wasCreated:(BOOL *)a2;
- (id)imageInfoForVideo:(id)a0 imageType:(unsigned long long)a1 createIfNeeded:(BOOL)a2 wasCreated:(BOOL *)a3;
- (void)saveChangesToManagedObjects;
- (id)_managedObjectWithEntityName:(id)a0 predicate:(id)a1 createIfNeeded:(BOOL)a2 wasCreated:(BOOL *)a3;
- (void)deleteFPSKeyDeletionInfos:(id)a0;
- (void)removeDownloadedMediaForVideoManagedObjects:(id)a0 markAsDeleted:(BOOL)a1 invalidateImmediately:(BOOL)a2;
- (id)mainContextVideoForVideo:(id)a0;
- (BOOL)_removeDownloadedMediaForVideoManagedObject:(id)a0 markAsDeleted:(BOOL)a1 saveWhenDone:(BOOL)a2 invalidateImmediately:(BOOL)a3;
- (void)invalidateKeysForVideoManagedObjects:(id)a0;
- (BOOL)_invalidateKeysForVideoManagedObject:(id)a0 saveWhenDone:(BOOL)a1 invalidateImmediately:(BOOL)a2;
- (id)_mainContextManagedObjectsForObjects:(id)a0;
- (void)_deleteVideoManagedObjects:(id)a0;
- (id)_videosMarkedAsDeleted;
- (id)_downloadedVideosForNonSignedInUsers;
- (id)videosWithDownloadState:(long long)a0;
- (void)_deleteOrphanedDownloads;
- (void)_removeDownloadsForNonSignedInUsers;
- (id)videoForPlayable:(id)a0;
- (id)videoForCanonicalID:(id)a0;
- (id)fpsKeyInfoForVideo:(id)a0 keyURI:(id)a1 createIfNeeded:(BOOL)a2 wasCreated:(BOOL *)a3;
- (id)existingFpsKeyInfoForKeyURI:(id)a0;
- (id)allFpsKeyDeletionInfos;
- (void)deleteFPSKeyDeletionInfo:(id)a0;
- (void)removeDownloadedMediaForVideoManagedObject:(id)a0 markAsDeleted:(BOOL)a1 invalidateImmediately:(BOOL)a2;
- (unsigned long long)countOfDownloadingOrDownloadedVideosForNonMainQueue;
- (void)invalidateKeysForVideoManagedObject:(id)a0;
- (id)enqueueMediaItemEntityTypesFetchWithCompletionHandler:(id /* block */)a0;
- (id)saveMediaEntity:(id)a0 completionHandler:(id /* block */)a1;
- (id)_imageLoaderIdentifier;
- (id)_imageLoadParamsForImageLoaderObject:(id)a0;
- (id)_imageLoadOperationWithParams:(id)a0 scaleToSize:(struct CGSize { double x0; double x1; })a1 cropToFit:(BOOL)a2;

@end
