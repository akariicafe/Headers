@class PXSectionedSelectionManager, PXAssetActionManager, NSString, PXAssetsDataSourceManager, PXLoadingStatusManager, PXMediaProvider, PXAssetCollectionActionManager;
@protocol PXPhotosViewDelegate, PXPhotosGridOptionsController;

@interface PXPhotosViewConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) PXSectionedSelectionManager *selectionManager;
@property (readonly, nonatomic) PXAssetActionManager *assetActionManager;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (weak, nonatomic) id<PXPhotosViewDelegate> delegate;
@property (nonatomic) BOOL wantsTabBarHidden;
@property (nonatomic) long long footerVisibilityStyle;
@property (copy, nonatomic) NSString *footerSubtitle;
@property (nonatomic) BOOL wantsCPLStatus;
@property (nonatomic) BOOL wantsContentFilterVisible;
@property (nonatomic) long long navBarStyle;
@property (nonatomic) BOOL wantsModernNavBarButtons;
@property (nonatomic) long long sectionHeaderStyle;
@property (nonatomic) long long sectionBodyStyle;
@property (nonatomic) long long summaryStyle;
@property (nonatomic) BOOL allowsCaptions;
@property (nonatomic) BOOL startsInSelectMode;
@property (nonatomic) BOOL wantsDimmedSelectionStyle;
@property (nonatomic) unsigned long long allowedActions;
@property (nonatomic) unsigned long long allowedBehaviors;
@property (nonatomic) unsigned long long forbiddenBadges;
@property (nonatomic) BOOL allowsInteractiveFavoriteBadges;
@property (nonatomic) BOOL allowsGridAppearanceActions;
@property (nonatomic) BOOL allowsDragAndDrop;
@property (nonatomic) BOOL allowsSwipeToSelect;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL lowMemoryMode;
@property (nonatomic) long long contentMode;
@property (nonatomic) long long oneUpPresentationOrigin;
@property (retain, nonatomic) id<PXPhotosGridOptionsController> optionsController;
@property (retain, nonatomic) PXLoadingStatusManager *loadingStatusManager;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDataSourceManager:(id)a0 mediaProvider:(id)a1 selectionManager:(id)a2 assetActionManager:(id)a3 assetCollectionActionManager:(id)a4;

@end
