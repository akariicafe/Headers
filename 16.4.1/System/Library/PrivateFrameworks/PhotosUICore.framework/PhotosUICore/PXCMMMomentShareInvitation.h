@class PXAssetCollectionActionManager, NSString, PHFetchResult, NSDate, PHMomentShare;
@protocol PXDisplayAsset, PXUIImageProvider, PXCMMInvitationParticipant, PXDisplayAssetCollection;

@interface PXCMMMomentShareInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying>

@property (readonly, nonatomic) long long aggregateMediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (readonly, nonatomic) PHFetchResult *participantsFetchResult;
@property (readonly, nonatomic) PHFetchResult *previewAssetsFetchResult;
@property (readonly, nonatomic) long long shareType;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id<PXCMMInvitationParticipant> owner;
@property (readonly, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long aggregateMediaType;

+ (id)new;
+ (id)invitationWithMomentShare:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMomentShare:(id)a0;
- (void)acceptWithCompletionHandler:(id /* block */)a0;
- (id)contextForActivityType:(unsigned long long)a0;
- (id)invitationWithUpdatedParticipantsFetchResult:(id)a0;
- (id)invitationWithUpdatedPreviewAssetsFetchResult:(id)a0;
- (id)momentShareStatus;

@end
