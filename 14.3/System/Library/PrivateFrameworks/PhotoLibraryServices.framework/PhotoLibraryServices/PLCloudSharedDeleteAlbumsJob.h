@class NSArray, NSString;

@interface PLCloudSharedDeleteAlbumsJob : PLCloudSharingJob

@property (retain, nonatomic) NSArray *albumCloudGUIDsToDelete;
@property (retain, nonatomic) NSString *inviterAddress;

+ (void)deleteLocalAlbumsForMSASAlbumGUIDs:(id)a0;
+ (void)deleteLocalAlbumForMSASAlbumGUID:(id)a0 inviterAddress:(id)a1;

- (void)run;
- (long long)daemonOperation;
- (void).cxx_destruct;
- (void)encodeToXPCObject:(id)a0;
- (void)runDaemonSide;
- (id)description;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;

@end
