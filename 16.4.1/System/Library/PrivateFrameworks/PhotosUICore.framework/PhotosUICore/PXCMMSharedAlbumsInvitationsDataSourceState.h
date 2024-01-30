@class NSDictionary, PHFetchResult;

@interface PXCMMSharedAlbumsInvitationsDataSourceState : NSObject <NSCopying>

@property (readonly, nonatomic) PHFetchResult *sharedAlbums;
@property (readonly, nonatomic) NSDictionary *invitationsBySharedAlbumObjectID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSharedAlbums:(id)a0 invitationsBySharedAlbumObjectID:(id)a1;
- (id)stateUpdatedWithChange:(id)a0 changeDetails:(id *)a1;

@end
