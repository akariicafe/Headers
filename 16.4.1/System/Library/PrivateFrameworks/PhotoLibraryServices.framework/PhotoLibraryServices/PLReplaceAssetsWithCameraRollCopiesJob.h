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
- (void)dealloc;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)_cameraRollAssetDerivedFromAsset:(id)a0;

@end
