@class NSString, UICollectionView, NSArray, CALayer;
@protocol AVTGroupPickerDelegate;

@interface AVTGroupListCollectionView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, AVTGroupPicker>

@property (readonly, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) CALayer *border;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSArray *groupItems;
@property (weak, nonatomic) id<AVTGroupPickerDelegate> delegate;
@property (nonatomic) long long selectedGroupIndex;

- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)reloadData;
- (void)layoutSubviews;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)borderWidth;
- (void)setupView;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (void)setupBorder;
- (void)setSelectedGroupIndex:(long long)a0 animated:(BOOL)a1;
- (id)initWithGroupItems:(id)a0 environment:(id)a1;
- (void)updateCollectionLayoutItemSize:(id)a0;

@end
