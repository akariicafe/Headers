@class NSString, NSDate;

@interface PLCloudSharingViewedStateChangeJob : PLCloudSharingJob

@property (nonatomic) long long jobType;
@property (retain, nonatomic) NSString *albumGUID;
@property (nonatomic) BOOL albumHasUnseenContent;
@property (nonatomic) long long albumUnviewedAssetCount;
@property (retain, nonatomic) NSString *assetCollectionGUID;
@property (nonatomic) BOOL assetCollectionHasUnreadComments;
@property (retain, nonatomic) NSDate *assetCollectionLastViewedCommentDate;

+ (void)markAlbum:(id)a0 asHavingUnseenContent:(BOOL)a1;
+ (void)updateUnviewedAssetCollectionCount:(int)a0 forAlbum:(id)a1;
+ (void)markAssetCollection:(id)a0 asHavingUnreadComments:(BOOL)a1 inAlbum:(id)a2;
+ (void)setLastViewedCommentDate:(id)a0 forAssetCollection:(id)a1 inAlbum:(id)a2;

- (long long)daemonOperation;
- (id)initFromXPCObject:(id)a0 libraryServicesManager:(id)a1;
- (void)run;
- (id)description;
- (void).cxx_destruct;
- (void)runDaemonSide;
- (void)encodeToXPCObject:(id)a0;
- (void)_executeAlbumViewedStateChanged;
- (void)_executeAlbumUnviewedAssetCountChangedWithGroup;
- (void)_executeAssetCommentsReadStateChangedWithGroup;
- (void)_executeAssetLastViewedCommentDateChangedWithGroup;

@end
