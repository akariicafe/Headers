@interface PLCloudSharingEnablingJob : PLCloudSharingJob

@property (nonatomic) BOOL enableSharing;

+ (void)deleteAllLocalSharedAlbumsInLibrary:(id)a0 keepPendingAlbums:(BOOL)a1 withReason:(id)a2;
+ (void)disableCloudSharingWithLibraryServicesManager:(id)a0;
+ (void)enableCloudSharing:(BOOL)a0 withPathManager:(id)a1;

- (void)run;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (long long)daemonOperation;
- (id)description;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (BOOL)shouldArchiveXPCToDisk;

@end
