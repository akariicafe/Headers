@class PUFontManager, PXExtendedTraitCollection, UIImage, PHImageRequestOptions, NSString, PXUIMediaProvider, PXPhotoKitCollectionsDataSourceManager, PXFeatureSpecManager, PXFeatureSpec, PUAlbumListCellContentViewHelperConfiguration, PXAssetBadgeManager, PXCollectionTileLayoutTemplate;

@interface PUAlbumListCellContentViewHelper : NSObject <PXChangeObserver>

@property (readonly, nonatomic) PUAlbumListCellContentViewHelperConfiguration *configuration;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PUFontManager *fontManager;
@property (nonatomic) struct CGSize { double width; double height; } albumCellSize;
@property (retain, nonatomic) UIImage *emptyPeopleAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *emptyAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *emptySharedAlbumPlaceholderImage;
@property (retain, nonatomic) PHImageRequestOptions *imageRequestOptions;
@property (retain, nonatomic) PXFeatureSpecManager *featureSpecManager;
@property (retain, nonatomic) PXFeatureSpec *featureSpec;
@property (retain, nonatomic) PXAssetBadgeManager *badgeManager;
@property (retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } previewInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateAlbumCellSize;
- (void)_recalculateAlbumCellSize;
- (void)_updateAlbumListCellContentViewForPlacesAlbum:(id)a0;
- (void)_updateStackView:(id)a0 forAssets:(id)a1 collection:(id)a2 withCustomEmptyPlaceholderImage:(id)a3;
- (id)_visibleAssetsForCollection:(id)a0 correspondingCollections:(out id *)a1;
- (void)configureAlbumListCellContentView:(id)a0 forCollection:(id)a1 title:(id)a2 animated:(BOOL)a3 enabled:(BOOL)a4 editing:(BOOL)a5;
- (id)_visibleAssetsForCollection:(id)a0 maximumNumberOfVisibleAssets:(long long)a1 correspondingCollections:(out id *)a2;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_getDisplayableAssets:(id *)a0 indexes:(id *)a1 forCollection:(id)a2 maximumCount:(long long)a3 useCache:(BOOL)a4;
- (id)subtitleForCollection:(id)a0;
- (long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)a0 inCollection:(id)a1 albumListCellContentView:(id)a2;
- (void)_updateAlbumListCellContentViewForPeopleAlbum:(id)a0;
- (void)_updateStackView:(id)a0 forFaces:(id)a1 inCollection:(id)a2 withCustomEmptyPlaceholderImage:(id)a3;
- (void)_prepareStackView:(id)a0 forCollection:(id)a1 withStackCount:(long long)a2;
- (unsigned long long)_editCapabilitiesForAlbum:(id)a0;
- (id)initWithConfiguration:(id)a0 dataSourceManager:(id)a1 mediaProvider:(id)a2 extendedTraitCollection:(id)a3;
- (id)_getDisplayableAssetsForStandInCollectionList:(id)a0 maximumCount:(long long)a1 useCache:(BOOL)a2 correspondingCollections:(out id *)a3;
- (void)reconfigureImageInAlbumListCellContentView:(id)a0 withImage:(id)a1 isPlaceholder:(BOOL)a2;
- (void).cxx_destruct;
- (void)_prepareStackView:(id)a0 forCollection:(id)a1 withStackCount:(long long)a2 withCustomEmptyPlaceHolderImage:(id)a3;
- (id)_getDisplayableFacesForCollectionList:(id)a0 maximumCount:(long long)a1;

@end
