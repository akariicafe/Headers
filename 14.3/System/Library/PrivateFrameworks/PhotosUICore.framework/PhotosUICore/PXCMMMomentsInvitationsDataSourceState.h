@class NSDictionary, PHFetchResult;

@interface PXCMMMomentsInvitationsDataSourceState : NSObject <NSCopying>

@property (readonly, nonatomic) PHFetchResult *assetCollections;
@property (readonly, nonatomic) NSDictionary *invitationsByAssetCollectionObjectID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)stateUpdatedWithChange:(id)a0 changeDetails:(id *)a1;
- (id)initWithAssetCollections:(id)a0 invitationsByAssetCollectionObjectID:(id)a1;

@end
