@class _UIDatePickerCalendarTimeSoundDriver, UIFont, UICollectionViewDiffableDataSource, NSNumberFormatter, UICollectionView, _UIDatePickerCalendarTimeWheelDisplayModeDriver, NSString;

@interface _UIDatePickerCalendarTimeWheel : UIControl <UICollectionViewDelegate> {
    long long _expectedRawValue;
}

@property (readonly, nonatomic) NSNumberFormatter *formatter;
@property (readonly, nonatomic) UICollectionView *collectionView;
@property (readonly, nonatomic) UICollectionViewDiffableDataSource *dataSource;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeWheelDisplayModeDriver *displayModeDriver;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeSoundDriver *soundDriver;
@property (readonly, nonatomic) long long interval;
@property (nonatomic) unsigned long long displayMode;
@property (nonatomic) long long selectedValue;
@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)_updateDataSource;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithInterval:(long long)a0 formatter:(id)a1;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)_updatePaging;
- (void)_updateCellForDisplayMode:(id)a0;
- (void)_createHierarchy;
- (void)_createDataSource;
- (void)_updateSelection;
- (void)_performWithoutChangingSelection:(id /* block */)a0;
- (id)_createLayout;
- (void)_updateSelectedValue:(long long)a0 fromExtern:(BOOL)a1;
- (id)_itemAtCenter;
- (BOOL)_updateContentOffset:(id)a0;
- (void)_setSelectedRawValue:(long long)a0 notify:(BOOL)a1;
- (id)_itemForContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (struct CGPoint { double x0; double x1; })_contentOffsetForProposedContentOffset:(struct CGPoint { double x0; double x1; })a0 velocity:(struct CGPoint { double x0; double x1; })a1 inScrollView:(id)a2;

@end
