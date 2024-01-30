@class NSArray, UICollectionView, NSString, UIView, AVTUIEnvironment, UICollectionViewFlowLayout;
@protocol AVTAvatarAttributeEditorSection, AVTAvatarAttributeEditorControllerSubSelectionDelegate;

@interface AVTAvatarAttributeEditorMulticolorSectionPickerController : NSObject <UICollectionViewDelegate, UICollectionViewDataSource, AVTAvatarAttributeEditorMulticolorPickerCellDelegate, AVTAvatarAttributeEditorSectionController>

@property (class, readonly, nonatomic) BOOL supportsSelection;

@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (nonatomic) double currentOffsetX;
@property (retain, nonatomic) NSArray *cachedTitleSizes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVTAvatarAttributeEditorControllerSubSelectionDelegate> delegate;
@property (readonly, nonatomic) id<AVTAvatarAttributeEditorSection> section;
@property (nonatomic) long long selectedIndex;

+ (double)edgeLengthFittingWidth:(double)a0 environment:(id)a1;
+ (double)estimatedContentWidthForTitleSizes:(id)a0 items:(id)a1;
+ (struct CGSize { double x0; double x1; })cellSizeForItemAtIndex:(long long)a0 forTitleSizes:(id)a1 items:(id)a2 forContainerWidth:(double)a3;
+ (BOOL)shouldScrollGivenTitleSizes:(id)a0 fittingWidth:(double)a1 items:(id)a2;
+ (double)adjustedWidthForTitleSizes:(id)a0 items:(id)a1 forWidth:(double)a2;
+ (BOOL)shouldWrapTitlesForTitleSizes:(id)a0 items:(id)a1 forWidth:(double)a2;
+ (double)estimatedContentHeightForWrappingTitleSizes:(id)a0 items:(id)a1 forWidth:(double)a2;
+ (struct CGPoint { double x0; double x1; })clampedContentOffsetForOffset:(struct CGPoint { double x0; double x1; })a0 collectionView:(id)a1;
+ (double)estimatedContentWidthForWrappingTitleSizes:(id)a0 items:(id)a1 forWidth:(double)a2;

- (long long)numberOfItems;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)indexForItem:(id)a0;
- (id)sectionView;
- (void)cacheTitleSizes;
- (struct CGSize { double x0; double x1; })cellSizeForItemAtIndex:(long long)a0;
- (void)multicolorPickerCellDidTapClearButton:(id)a0;
- (void)updateWithSection:(id)a0;
- (BOOL)evaluateDisplayCondition:(id)a0;
- (id)viewForIndex:(long long)a0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })edgeInsetsFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)prefetchingSectionItemForIndex:(long long)a0;
- (void)updateCell:(id)a0 forItemAtIndex:(long long)a1;
- (void)cell:(id)a0 willDisplayAtIndex:(long long)a1;
- (void)resetToDefaultState;
- (void)invalidateLayoutForNewContainerSize:(struct CGSize { double x0; double x1; })a0;
- (void)didHighlightItemAtIndex:(long long)a0 cell:(id)a1 completionBlock:(id /* block */)a2;
- (void)didUnhighlightItemAtIndex:(long long)a0 cell:(id)a1 completionBlock:(id /* block */)a2;
- (void)didSelectItemAtIndex:(long long)a0 cell:(id)a1;
- (struct CGSize { double x0; double x1; })sizeForFocusingItemAtIndex:(long long)a0 fittingSize:(struct CGSize { double x0; double x1; })a1;
- (void)attributeSection:(id)a0 didChangeValueForSectionItem:(id)a1;
- (void)createCollectionView;
- (void)updateInsetsForSize:(struct CGSize { double x0; double x1; })a0;
- (double)currentRelativeContentOffsetX;
- (void)setCurrentRelativeContentOffsetX:(double)a0;

@end
