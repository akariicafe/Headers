@class NSArray, NSString, UICollectionView, UICollectionViewFlowLayout, NSLayoutConstraint;
@protocol HKDisplayTypeContextViewDelegate;

@interface HKDisplayTypeContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextHorizontalCollectionViewCellDelegate> {
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_collectionViewLayout;
    NSLayoutConstraint *_collectionHeightConstraint;
    long long _lastSelectedRow;
}

@property (retain, nonatomic) NSArray *displayTypeContextItems;
@property (weak, nonatomic) id<HKDisplayTypeContextViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (double)_contentHeight;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)init;
- (void).cxx_destruct;
- (double)preferredHeight;
- (id)_backgroundColor;
- (id)_buildCollectionViewLayout;
- (void)didTapOnInfoButtonForCollectionViewCell:(id)a0;
- (void)_handleSelection:(id)a0 indexPath:(id)a1 informDelegate:(BOOL)a2;
- (void)selectItemAtIndex:(long long)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;

@end
