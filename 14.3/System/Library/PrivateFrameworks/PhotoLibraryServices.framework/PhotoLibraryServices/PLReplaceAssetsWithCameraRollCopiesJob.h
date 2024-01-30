@class NSArray, PLPhotoLibrary, PLManagedAlbum, NSPersistentStoreCoordinator, PLManagedObjectContext;

@interface PLReplaceAssetsWithCameraRollCopiesJob : PLDaemonJob

@property (copy, nonatomic) NSArray *assets;
@property (retain, nonatomic) PLManagedAlbum *album;
@property (retain, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) PLManagedObjectContext *managedObjectContext;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *coordinator;

+ (void)replaceAssets:(id)a0 withCameraRollCopiesInAlbum:(id)a1;

- (void)run;
- (id)initWithPhotoLibrary:(id)a0;
- (long long)daemonOperation;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (void)runDaemonSide;
- (void)dealloc;
- (id)_cameraRollAssetDerivedFromAsset:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;

@end
