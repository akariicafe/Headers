@class NSMutableArray, NSString, NSCalendar, HKDateCache, UIScrollView, HKMonthDayCell, NSDate;
@protocol HKCalendarScrollViewControllerDelegate;

@interface HKCalendarScrollViewController : HKViewController <UIScrollViewDelegate, HKCalendarWeekViewDelegate, HKDateCacheObserver> {
    unsigned long long _numberOfRows;
    NSCalendar *_calendar;
    HKDateCache *_dateCache;
    HKMonthDayCell *_selectedCell;
    NSDate *_initiallyCenteredDate;
    NSMutableArray *_weekViews;
    BOOL _needsInitialOffset;
}

@property (readonly, nonatomic) UIScrollView *scrollView;
@property (nonatomic) double topInset;
@property (weak, nonatomic) id<HKCalendarScrollViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)dealloc;
- (void)loadView;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_visibleContentRect;
- (void)viewWillLayoutSubviews;
- (void)dateCacheDidUpdate:(id)a0 onNotification:(id)a1;
- (id)_weekViewContainingTitleForThisMonth;
- (void)setSelectedCell:(id)a0;
- (void)_selectTodayCell;
- (void)_createWeekViews;
- (struct CGPoint { double x0; double x1; })_setWeekViewsToCenterDate:(id)a0 forceUpdate:(BOOL)a1;
- (double)_heightOfAllWeekCells;
- (void)_selectCellForDate:(id)a0;
- (void)updateVisibleAccessoryViews;
- (id)_weekForDate:(id)a0;
- (id)_weekViewForToday;
- (void)_pulseCircle;
- (id)_currentlyCenteredVisibleWeek;
- (id)_startDateToTileWeekViews:(id)a0;
- (struct CGPoint { double x0; double x1; })_centerPointToCenterDate:(id)a0;
- (BOOL)_dateIsVisible:(id)a0;
- (void)scrollToDate:(id)a0 animateIfPossible:(BOOL)a1;
- (unsigned long long)_firstVisibleWeekIndex;
- (void)_findCenteredWeekAndUpdateTitleIfNecessary;
- (void)_refreshViewsAndUpdateToday;
- (void)week:(id)a0 cellSelected:(id)a1;
- (id)initWithSelectedDate:(id)a0;
- (void)scrollToToday;

@end
