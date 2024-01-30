@class UICollectionView, _UIDatePickerLinkedLabel, NSLocale, _UIDatePickerCalendarDay, UICollectionViewDiffableDataSource, NSDateFormatter, NSCalendar, NSString, NSLayoutConstraint, _UIDatePickerCalendarViewDataSourceController, UIStackView, _UIDatePickerCalendarMonth, _UIDatePickerDateRange;
@protocol _UIDatePickerCalendarDateViewDelegate;

@interface _UIDatePickerCalendarDateView : UIView <UICollectionViewDelegate> {
    struct { unsigned char needsCollectionViewSelectionUpdate : 1; unsigned char needsCollectionViewScrollPositionUpdate : 1; unsigned char needsUpdateSizing : 1; unsigned char isIgnoringScrollCallbacks : 1; unsigned char renderOverhangDays : 1; } _flags;
    NSDateFormatter *_cellFormatter;
    UIStackView *_weekdayStackView;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
    UICollectionViewDiffableDataSource *_dataSource;
    _UIDatePickerCalendarViewDataSourceController *_dataSourceController;
    struct CGPoint { double x; double y; } _frozenContentOffset;
    struct CGSize { double width; double height; } _lastKnownSize;
    double _lastWeekdayLabelWidth;
    _UIDatePickerLinkedLabel *_daySizingLabel;
    _UIDatePickerLinkedLabel *_weekdaySizingLabel;
}

@property (weak, nonatomic) id<_UIDatePickerCalendarDateViewDelegate> delegate;
@property (readonly, nonatomic) NSCalendar *calendar;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) _UIDatePickerDateRange *dateRange;
@property (retain, nonatomic) NSString *customFontDesign;
@property (retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth;
@property (retain, nonatomic) _UIDatePickerCalendarDay *selectedDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void)_setSelectedDate:(id)a0 animated:(BOOL)a1 updateVisibleMonth:(BOOL)a2 updateCollectionView:(BOOL)a3 notifyDelegate:(BOOL)a4;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)_setVisibleMonth:(id)a0 animated:(BOOL)a1 updateDataSource:(BOOL)a2 updateCollectionView:(BOOL)a3 notifyDelegate:(BOOL)a4;
- (void)reloadWithCalendar:(id)a0 locale:(id)a1 dateRange:(id)a2 selectedDay:(id)a3 visibleMonth:(id)a4;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)_setupDateFormatter;
- (void)_setNeedsUpdateSizing;
- (void)_reloadPossibleDayValues;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reloadCollectionViewLayout;
- (id)_cellForCollectionView:(id)a0 indexPath:(id)a1 day:(id)a2;
- (void)_shouldDifferentiateWithoutColorUpdated:(id)a0;
- (void)_setNeedsCollectionViewScrollPositionUpdate;
- (void)_updateCollectionViewSelection:(BOOL)a0;
- (double)__dayAndWeekdayLabelWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateCollectionViewScrollPosition:(BOOL)a0;
- (void)_cleanupDataIfNecessary;
- (void)_performIgnoringScrollCallbacks:(id /* block */)a0;
- (void)_reloadDataSourceController;
- (void)_setNeedsCollectionViewSelectionUpdate;
- (void)_freezeContentOffset;
- (void)_updateCollectionViewContentInsets;
- (void)_notifyDelegateAboutDataChange;
- (void)_restoreContentOffsetWithPageOffset:(long long)a0;
- (void)_notifyDelegateAboutVisibilityChange;
- (void)_updateVisibleMonthIfNecessary;
- (void)_performIfNotIgnoringScrollCallbacks:(id /* block */)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_reload;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setSelectedDate:(id)a0 animated:(BOOL)a1;
- (void)setVisibleMonth:(id)a0 animated:(BOOL)a1;
- (void)_setupViewHierarchy;
- (void)_updateSizing;
- (void)_reloadWeekdays;
- (void)_reloadDateFormatters;

@end
