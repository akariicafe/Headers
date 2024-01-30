@class NSString, PHFetchResult, NSDate, PHAssetCollection, PXAssetCollectionActionManager;
@protocol PXDisplayAsset, PXUIImageProvider, PXCMMInvitationParticipant;

@interface PXCMMSharedAlbumInvitation : NSObject <PXMediaTypeAggregating, PXCMMInvitation, NSCopying>

@property (readonly, nonatomic) long long aggregateMediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
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
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long aggregateMediaType;

+ (id)new;
+ (id)_invitationWithAssetCollection:(id)a0 previewAssetsFetchResult:(id)a1;
+ (id)_participantsForAssetCollection:(id)a0;
+ (id)invitationWithAssetCollection:(id)a0;

@end
