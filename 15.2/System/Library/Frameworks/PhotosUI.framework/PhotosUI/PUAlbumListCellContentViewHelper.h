@class PUFontManager, PXExtendedTraitCollection, UIImage, PHImageRequestOptions, NSString, PXUIMediaProvider, PXPhotoKitCollectionsDataSourceManager, PXFeatureSpecManager, PXFeatureSpec, PUAlbumListCellContentViewHelperConfiguration, PXAssetBadgeManager, PXCollectionTileLayoutTemplate;

@interface PUAlbumListCellContentViewHelper : NSObject <PXChangeObserver>

@property (readonly, nonatomic) PUAlbumListCellContentViewHelperConfiguration *configuration;
@property (readonly, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PUFontManager *fontManager;
@property (nonatomic) struct CGSize { double width; double height; } albumCellSize;
@property (retain, nonatomic) UIImage *emptyAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *emptySharedAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *addSharedAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *hiddenAlbumPlaceholderImage;
@property (retain, nonatomic) UIImage *recentlyDeletedAlbumPlaceholderImage;
@property (retain, nonatomic) PHImageRequestOptions *imageRequestOptions;
@property (retain, nonatomic) PXFeatureSpecManager *featureSpecManager;
@property (retain, nonatomic) PXFeatureSpec *featureSpec;
@property (retain, nonatomic) PXAssetBadgeManager *badgeManager;
@property (retain, nonatomic) PXCollectionTileLayoutTemplate *collectionTileLayoutTemplate;
@property (nonatomic) BOOL didInitializeMemoriesTitleSupport;
@property (readonly, nonatomic) PXExtendedTraitCollection *traitCollection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_placeholderImageWithSize:(struct CGSize { double x0; double x1; })a0 backgroundColor:(id)a1 glyphImageName:(id)a2 glyphAlpha:(double)a3;

- (id)_getDisplayableAssetsForStandInCollectionList:(id)a0 maximumCount:(long long)a1 useCache:(BOOL)a2 correspondingCollections:(out id *)a3;
- (void)_invalidateAlbumCellSize;
- (id)initWithConfiguration:(id)a0 dataSourceManager:(id)a1 mediaProvider:(id)a2 extendedTraitCollection:(id)a3;
- (id)subtitleForCollection:(id)a0;
- (void)_recalculateAlbumCellSize;
- (void)_initializeMemoriesTitleSupportIfNeeded;
- (void)_updateAlbumListCellContentViewForPeopleAlbum:(id)a0;
- (void)_prepareStackView:(id)a0 forCollection:(id)a1 withStackCount:(long long)a2 withCustomEmptyPlaceHolderImage:(id)a3;
- (unsigned long long)_editCapabilitiesForAlbum:(id)a0;
- (id)_visibleAssetsForCollection:(id)a0 maximumNumberOfVisibleAssets:(long long)a1 correspondingCollections:(out id *)a2;
- (id)_visibleAssetsForCollection:(id)a0 correspondingCollections:(out id *)a1;
- (void)_updateStackView:(id)a0 forFaces:(id)a1 inCollection:(id)a2 withCustomEmptyPlaceholderImage:(id)a3;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_getDisplayableFacesForCollectionList:(id)a0 maximumCount:(long long)a1;
- (void)_getDisplayableAssets:(id *)a0 indexes:(id *)a1 forCollection:(id)a2 maximumCount:(long long)a3 useCache:(BOOL)a4;
- (void)configureAlbumListCellContentView:(id)a0 forCollection:(id)a1 title:(id)a2 animated:(BOOL)a3 enabled:(BOOL)a4 editing:(BOOL)a5;
- (void)_updateStackView:(id)a0 forAssets:(id)a1 collection:(id)a2 withCustomEmptyPlaceholderImage:(id)a3;
- (long long)estimatedIndexOfAssetForStackItemAtIndex:(long long)a0 inCollection:(id)a1 albumListCellContentView:(id)a2;
- (void)_updateStackView:(id)a0 forAssets:(id)a1 memoriesCollection:(id)a2 memories:(id)a3 withCustomEmptyPlaceholderImage:(id)a4;
- (void)reconfigureImageInAlbumListCellContentView:(id)a0 withPlaceholderImage:(id)a1;
- (void)_updateAlbumListCellContentViewForPlacesAlbum:(id)a0;

@end
