@class UISelectionFeedbackGenerator, JTCollectionView, NSIndexPath, JTCollectionViewFlowLayout, UIView, UILabel;
@protocol CFXFilterEffectPickerViewDataSource, CFXFilterEffectPickerViewDelegate;

@interface CFXFilterEffectPickerView : CFXEffectPickerView

@property (weak, nonatomic) UIView *contentView;
@property (weak, nonatomic) JTCollectionView *collectionView;
@property (retain, nonatomic) JTCollectionViewFlowLayout *collectionViewLayout;
@property (retain, nonatomic) UIView *compactSelectionView;
@property (retain, nonatomic) UILabel *compactSelectedTitleView;
@property (nonatomic) unsigned long long cachedEffectCount;
@property (nonatomic, getter=isDisplayingExpandedLayout) BOOL displayExpandedLayout;
@property (nonatomic) struct CGSize { double width; double height; } lastViewSize;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) NSIndexPath *lastScrollIndexPath;
@property (nonatomic) struct CGPoint { double x; double y; } previousScrollOffset;
@property (weak, nonatomic) id<CFXFilterEffectPickerViewDataSource> dataSource;
@property (weak, nonatomic) id<CFXFilterEffectPickerViewDelegate> delegate;

- (void)reloadData;
- (void)layoutSubviews;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (unsigned long long)selectedIndex;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void).cxx_destruct;
- (void)didScrollCollectionView;
- (BOOL)isDisplayingCompactLayout;
- (void)configureCell:(id)a0;
- (void)subviewsDidLoad;
- (void)buildCompactSelectionViews;
- (void)removeCompactSelectionViews;
- (void)CFX_selectInitialItem;
- (void)configureCollectionViewLayout;
- (void)updatePreviewEffectsWhenReloadComplete;
- (id)indexPathForCenterOfCollectionView;
- (id)layoutAttributesForNearestItemToCenterWithOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)CFX_updateTitleForCenterItemAtIndex:(long long)a0;
- (void)selectCenterItem;
- (void)CFX_selectItemAtCellIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (id)effectPickerNibName;
- (id)effectPickerCellNibName;
- (id)effectPickerCellReuseIdentifier;
- (void)didSelectItemAtCellIndex:(unsigned long long)a0;
- (void)selectEffectWithIdentifier:(id)a0;
- (void)orientationDidChange;

@end
