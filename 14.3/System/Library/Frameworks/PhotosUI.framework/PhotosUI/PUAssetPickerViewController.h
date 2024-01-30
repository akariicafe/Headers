@class PHImageManager, NSString, NSArray, PUAssetPickerFilterOptions, NSOrderedSet, NSMutableDictionary, NSDictionary, UICollectionViewDiffableDataSource, UICollectionView, PXCachingCountManager;
@protocol PUAssetPickerViewControllerActionHandler;

@interface PUAssetPickerViewController : UIViewController <UICollectionViewDelegate>

@property (copy, nonatomic) NSArray *sectionDataItems;
@property (retain, nonatomic) PUAssetPickerFilterOptions *filterOptions;
@property (copy, nonatomic) NSOrderedSet *selectedAssets;
@property (copy, nonatomic) NSDictionary *downloadProgress;
@property (readonly, nonatomic) PHImageManager *imageManager;
@property (readonly, nonatomic) PXCachingCountManager *countManager;
@property (readonly, nonatomic) BOOL viewEmbeddedInGridHeader;
@property (readonly, weak, nonatomic) id<PUAssetPickerViewControllerActionHandler> actionHandler;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (retain, nonatomic) NSMutableDictionary *identifierMapping;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createCollectionViewWithLayout:(id)a0;
+ (id)createCollectionViewLayoutWithSectionDataItems:(id)a0;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)selectedAssetsDidChange:(id)a0;
- (void)downloadProgressDidChange:(id)a0 changedAssetIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)initWithSectionDataItems:(id)a0 viewEmbeddedInGridHeader:(BOOL)a1 actionHandler:(id)a2;
- (id)createDataSourceForCollectionView:(id)a0;
- (id)_configuredCellForCollectionView:(id)a0 indexPath:(id)a1 itemIdentifier:(id)a2;
- (id)_configuredSupplementaryViewForCollectionView:(id)a0 kind:(id)a1 indexPath:(id)a2;
- (id)initWithSectionDataItems:(id)a0 filterOptions:(id)a1 selectedAssets:(id)a2 downloadProgress:(id)a3 imageManager:(id)a4 countManager:(id)a5 viewEmbeddedInGridHeader:(BOOL)a6 actionHandler:(id)a7;
- (void)viewDidLoad;

@end
