@class UIView, NSString, CNPhotoPickerPreviewView, CNPhotoPickerVariantsManager, NSArray, UIImageView, CNPhotoPickerProviderItem, UICollectionView;
@protocol CNPhotoPickerVariantListControllerDelegate;

@interface CNPhotoPickerVariantListController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, CNPhotoPickerProviderItemDelegate>

@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UIView *headerView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (retain, nonatomic) CNPhotoPickerPreviewView *posePreview;
@property (retain, nonatomic) NSString *selectedVariantIdentifier;
@property (retain, nonatomic) NSArray *providerItems;
@property (retain, nonatomic) CNPhotoPickerVariantsManager *variantsManager;
@property (nonatomic) BOOL shouldShowCaptions;
@property (weak, nonatomic) id<CNPhotoPickerVariantListControllerDelegate> delegate;
@property (readonly, nonatomic) CNPhotoPickerProviderItem *originalItem;
@property (readonly, nonatomic) NSString *variantsDisplayTitle;
@property (retain, nonatomic) UIView *sectionHeaderView;
@property (copy, nonatomic) id /* block */ numberOfItemsPerRowProvider;
@property (nonatomic) BOOL showPreview;
@property (nonatomic) unsigned long long cellStyle;
@property (nonatomic) BOOL showsToolbar;
@property (nonatomic) BOOL commitsChangesOnSelection;
@property (nonatomic) BOOL showsSelection;
@property (nonatomic) NSString *rightBarButtonTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForHeaderInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (long long)topMarginForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 shouldShowCaptions:(BOOL)a1;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)viewDidLoad;
- (id)scrollView;
- (void).cxx_destruct;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)cancel:(id)a0;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)initWithVariantsManager:(id)a0 originalItem:(id)a1 selectedVariantIdentifier:(id)a2;
- (void)buildCollectionView;
- (void)buildHeader;
- (void)didFinishSelectingVariant;
- (void)generateProviderItems;
- (id)initWithVariantsManager:(id)a0 originalItem:(id)a1;
- (void)providerItemDidUpdate:(id)a0;
- (void)updateFlowLayoutItemSize;
- (void)updateForNewOriginalItem:(id)a0;
- (void)updatePreviewWithItem:(id)a0;

@end
