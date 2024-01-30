@class UICollectionViewLayout, NSArray, NSString, UICollectionView, NSIndexPath, HKDisplayTypeContextVerticalCollectionViewCell, HKDisplayTypeContextItem;
@protocol HKDisplayTypeSectionedContextViewDelegate;

@interface HKDisplayTypeSectionedContextView : UIView <UICollectionViewDataSource, UICollectionViewDelegate, HKDisplayTypeContextVerticalCollectionViewCellDelegate> {
    long long _style;
    BOOL _bottomInsetsEnabled;
    UICollectionView *_collectionView;
    UICollectionViewLayout *_collectionViewLayout;
    NSIndexPath *_lastSelectedIndex;
}

@property (retain, nonatomic) HKDisplayTypeContextVerticalCollectionViewCell *sizingCell;
@property (retain, nonatomic) HKDisplayTypeContextItem *sizingItem;
@property (nonatomic) double sizingCellEstimatedHeight;
@property (retain, nonatomic) NSArray *displayTypeContextSections;
@property (weak, nonatomic) id<HKDisplayTypeSectionedContextViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectItemAtIndexPath:(id)a0 animated:(BOOL)a1 scrollPosition:(unsigned long long)a2;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)collectionView:(id)a0 didDeselectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)_contentHeight;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (void)scrollToTop;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (double)_contentWidth;
- (void)deselectAllItemsAnimated:(BOOL)a0;
- (id)_buildCollectionViewLayout;
- (double)_cellSizingWidth;
- (double)_estimatedDynamicCellHeight;
- (void)_handleSelection:(id)a0 indexPath:(id)a1 informDelegate:(BOOL)a2;
- (id)_makeDummySizingItem;
- (id)_makeSizingItemWithItem:(id)a0;
- (double)_maximumHeaderLabelLength;
- (double)_preferredCollectionViewHeightForCount:(long long)a0;
- (long long)_rowsForScreenSize;
- (void)_updateSizingCellWithContextItemSections:(id)a0;
- (void)didTapOnInfoButtonForCollectionViewCell:(id)a0;
- (id)initWithStyle:(long long)a0 useBottomInsets:(BOOL)a1;

@end
