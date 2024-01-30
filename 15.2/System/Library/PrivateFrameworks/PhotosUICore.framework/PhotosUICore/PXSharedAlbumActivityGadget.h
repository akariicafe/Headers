@class UILabel, PXFeedAssetsSectionInfo, PXGadgetSpec, _PXSharedAlbumActivityGadgetContentView, PXAssetCollageView, PXSharedAlbumHeaderView, NSSet, PXPhotoKitAssetsDataSourceManager, NSAttributedString, PXPhotoKitUIMediaProvider, NSString, NSArray, PXAssetReference;
@protocol PXGadgetDelegate;

@interface PXSharedAlbumActivityGadget : NSObject <PXOneUpPresentationDelegate, PXSettingsKeyObserver, PXGadget>

@property (readonly, nonatomic) BOOL isContentViewLoaded;
@property (nonatomic) BOOL isContentViewLaidOut;
@property (retain, nonatomic) _PXSharedAlbumActivityGadgetContentView *contentView;
@property (retain, nonatomic) PXSharedAlbumHeaderView *headerView;
@property (retain, nonatomic) PXAssetCollageView *collageView;
@property (retain, nonatomic) UILabel *captionLabel;
@property (nonatomic) BOOL wasAskedToLoadContentData;
@property (retain, nonatomic) PXPhotoKitAssetsDataSourceManager *assetsDataSourceManager;
@property (retain, nonatomic) PXPhotoKitUIMediaProvider *mediaProvider;
@property (retain, nonatomic) PXAssetReference *currentAssetReference;
@property (retain, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSAttributedString *caption;
@property (copy, nonatomic) NSSet *oneUpHiddenAssetReferences;
@property (retain, nonatomic) PXFeedAssetsSectionInfo *assetsSectionInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long gadgetType;
@property (readonly, nonatomic) unsigned long long gadgetCapabilities;
@property (retain, nonatomic) PXGadgetSpec *gadgetSpec;
@property (weak, nonatomic) id<PXGadgetDelegate> delegate;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long accessoryButtonType;
@property (readonly, nonatomic) NSString *accessoryButtonTitle;
@property (readonly, nonatomic) unsigned long long headerStyle;
@property (nonatomic) long long priority;
@property (readonly, nonatomic) Class collectionViewItemClass;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } visibleContentRect;

+ (void)preloadResources;

- (void)contentViewDidDisappear;
- (long long)oneUpPresentationOrigin:(id)a0;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (id)oneUpPresentation:(id)a0 regionOfInterestForAssetReference:(id)a1;
- (void)contentViewWillAppear;
- (id)oneUpPresentationDataSourceManager:(id)a0;
- (struct CGSize { double x0; double x1; })_performLayoutInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 updateSubviewFrames:(BOOL)a1;
- (void)userDidSelectGadget;
- (id)uniqueGadgetIdentifier;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_layoutContentView;
- (void).cxx_destruct;
- (id)oneUpPresentationMediaProvider:(id)a0;
- (id)init;
- (void)_loadAssets;
- (id)oneUpPresentation:(id)a0 currentImageForAssetReference:(id)a1;
- (void)oneUpPresentation:(id)a0 setHiddenAssetReferences:(id)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)dealloc;
- (id)oneUpPresentationInitialAssetReference:(id)a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_updateCollageViewVideoEnabled;
- (void)_updateCollageViewHiddenAssets;
- (void)_loadContentFromSectionInfo;
- (void)_updateCollageView;
- (unsigned long long)_numberOfLinesForCaption;
- (BOOL)_isAccessibilityContentSize;
- (void)_loadCaption;
- (void)_handleActionTap:(id)a0;
- (void)_handleCollageViewTap:(id)a0;
- (void)_navigateToAssetView:(id)a0;

@end
