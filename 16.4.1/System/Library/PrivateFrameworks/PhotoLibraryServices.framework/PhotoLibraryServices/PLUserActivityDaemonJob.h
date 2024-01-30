@class NSString, NSArray;

@interface PLUserActivityDaemonJob : PLDaemonJob

@property long long actionType;
@property (copy, nonatomic) NSString *albumUUID;
@property (retain, nonatomic) NSArray *assetUUIDs;
@property (nonatomic) long long cloudFeedContent;
@property (copy, nonatomic) NSString *suggestedCMMUUID;
@property (copy, nonatomic) NSString *momentShareUUID;

+ (void)userDidNavigateAwayFromSharedAlbum:(id)a0;
+ (void)userDidViewCloudFeedContent:(long long)a0;
+ (void)userDidNavigateIntoSharedAlbum:(id)a0;
+ (void)userDidDeleteSharedAssets:(id)a0;
+ (void)userDidDeleteSharedAlbum:(id)a0;
+ (void)userDidChangeStatusForMomentShare:(id)a0;
+ (void)userDidNavigateIntoImagePickerSharedAlbum:(id)a0;
+ (void)userDidReadCommentOnSharedAsset:(id)a0;
+ (void)userDidChangeStatusForSuggestedCMM:(id)a0;
+ (void)userDidNavigateAwayFromAllSharedAlbums;
+ (void)userDidViewSharedLibraryParticipantAssetTrashNotification;
+ (void)userDidLeavePhotosApplication;
+ (id)newUserActivityDaemonJob;

- (void)run;
- (id)initWithAssetsdClient:(id)a0;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (long long)daemonOperation;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (void).cxx_destruct;

@end
