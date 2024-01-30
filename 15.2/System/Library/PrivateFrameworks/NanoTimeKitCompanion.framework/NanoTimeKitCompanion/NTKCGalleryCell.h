@class UIStackView, NSString, NSArray, UICollectionViewFlowLayout, _NTKCAddNewFace, NTKGalleryCollection, UICollectionView, NSLayoutConstraint, UILabel;
@protocol NTKCGalleryCellDelegate;

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) NSLayoutConstraint *cvHeightConstraint;
@property (retain, nonatomic) UIStackView *contentStack;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) UIStackView *footerStack;
@property (retain, nonatomic) UILabel *footer;
@property (copy, nonatomic) NSArray *snapshotRequests;
@property (retain, nonatomic) _NTKCAddNewFace *addNewFace;
@property (nonatomic) BOOL allSnapshotsLoaded;
@property (nonatomic) BOOL showFooterInCollectionView;
@property (retain, nonatomic) NTKGalleryCollection *collection;
@property (weak, nonatomic) id<NTKCGalleryCellDelegate> delegate;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)_configureViews;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void).cxx_destruct;
- (id)init;
- (void)prepareForReuse;
- (void)dealloc;
- (void)_fontSizeDidChange;
- (void)_resetSnapshotRequests;
- (struct CGPoint { double x0; double x1; })_contentInsetPoint;
- (BOOL)_shouldShowAddNewFace;
- (void)updateFaceAtIndex:(unsigned long long)a0;
- (void)selectFace:(id)a0;
- (void)clearSelectedFaces;
- (id)faceForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)containerViewForFace:(id)a0;

@end
