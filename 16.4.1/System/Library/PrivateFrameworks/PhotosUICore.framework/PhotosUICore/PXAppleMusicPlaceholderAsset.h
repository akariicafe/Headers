@class NSString;
@protocol PXAudioAsset;

@interface PXAppleMusicPlaceholderAsset : PXPlaceholderAudioAsset <PXStorySongResource>

@property (readonly, nonatomic) id<PXAudioAsset> px_storyResourceSongAsset;
@property (readonly, nonatomic) NSString *px_storyResourceIdentifier;
@property (readonly, nonatomic) long long px_storyResourceKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithStoreID:(id)a0;
- (id)cueSource;
- (id)initWithCatalog:(long long)a0 identifier:(id)a1 audioSessionClass:(Class)a2;
- (BOOL)isAudioEqualToAsset:(id)a0;

@end
