@class UIStackView, NSString, NSArray, UICollectionViewFlowLayout, NTKCGalleryCollection, _NTKCAddNewFace, UICollectionView, NSLayoutConstraint, UILabel;
@protocol NTKCGalleryCellDelegate;

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>

@property (retain, nonatomic) UILabel *title;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (nonatomic) struct CGSize { double width; double height; } itemSize;
@property (nonatomic) BOOL hasCalloutName;
@property (nonatomic) BOOL hasCalloutImage;
@property (retain, nonatomic) NSLayoutConstraint *titleBaselineConstraint;
@property (retain, nonatomic) NSLayoutConstraint *faceContainerTopConstraint;
@property (retain, nonatomic) NSLayoutConstraint *leadingInsetConstraint;
@property (retain, nonatomic) NSLayoutConstraint *cvHeightConstraint;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) UIStackView *collectionViewFooterStack;
@property (retain, nonatomic) UILabel *footer;
@property (copy, nonatomic) NSArray *snapshotRequests;
@property (retain, nonatomic) _NTKCAddNewFace *addNewFace;
@property (nonatomic) BOOL allSnapshotsLoaded;
@property (retain, nonatomic) NTKCGalleryCollection *collection;
@property (weak, nonatomic) id<NTKCGalleryCellDelegate> delegate;
@property (nonatomic) struct CGPoint { double x0; double x1; } contentOffset;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)rowHeightForCollection:(id)a0;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)prepareForReuse;
- (void)didMoveToSuperview;
- (void)layoutSubviews;
- (void)_fontSizeDidChange;
- (void)_resetSnapshotRequests;
- (void)ensureCorrectTitleViewOrientation;
- (void)showFooterTextIfNeeded;
- (void)calculateHeightForCollection;
- (BOOL)hasFooterText;
- (BOOL)shouldShowFooterTextInCollectionView;
- (struct CGPoint { double x0; double x1; })_contentInsetPoint;
- (BOOL)_shouldShowAddNewFace;
- (void)updateFaceAtIndex:(unsigned long long)a0;
- (void)selectFace:(id)a0;
- (void)clearSelectedFaces;
- (id)faceForLocation:(struct CGPoint { double x0; double x1; })a0;
- (id)containerViewForFace:(id)a0;

@end
