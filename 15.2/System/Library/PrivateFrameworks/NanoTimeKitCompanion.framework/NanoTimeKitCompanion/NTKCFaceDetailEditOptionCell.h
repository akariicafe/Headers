@class NSString, UICollectionViewFlowLayout, NTKFaceView, NTKEditOptionCollection, NSDictionary, UICollectionView, UILabel, NTKFace;
@protocol NTKCFaceDetailEditOptionCellDelegate;

@interface NTKCFaceDetailEditOptionCell : NTKCDetailTableViewCell <UICollectionViewDelegate, UICollectionViewDataSource> {
    double _outlineOutset;
    double _outlinePadding;
    long long _selectedIndex;
}

@property (retain, nonatomic) NTKEditOptionCollection *collection;
@property (weak, nonatomic) NTKFaceView *faceView;
@property (weak, nonatomic) NTKFace *face;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *layout;
@property (retain, nonatomic) UILabel *optionsDescription;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } swatchFrame;
@property (retain, nonatomic) NSDictionary *selectedOptions;
@property (retain, nonatomic) NSDictionary *selectedSlotOptions;
@property (weak, nonatomic) id<NTKCFaceDetailEditOptionCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (double)insetSpacingForStyle:(long long)a0;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (double)_spacing;
- (double)rowHeight;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollToIndex:(long long)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (void)_fontSizeDidChange;
- (void)_setupFromCollection;
- (id)_indexPathForEditOptionIndex:(long long)a0;
- (id)_imageForIndexPath:(id)a0;
- (long long)_swatchImageContentMode;
- (BOOL)_isReloadCollectionRequired:(id)a0 selectedOptions:(id)a1;
- (void)_ensureIndexPathVisible:(id)a0 animated:(BOOL)a1;
- (void)reloadVisibleCells;
- (void)_setupCell:(id)a0;
- (long long)_editOptionIndexForIndexPath:(id)a0;
- (id)_dequeueCellForIndexPath:(id)a0;
- (void)ensureIndexVisible:(long long)a0 animated:(BOOL)a1;
- (id)initWithCollection:(id)a0 forFaceView:(id)a1 face:(id)a2;
- (BOOL)collectionChanged:(id)a0 withSelectedOptions:(id)a1;
- (void)scrollToSelectedOption:(BOOL)a0;
- (void)ensureSelectedOptionVisible:(BOOL)a0;

@end
