@class NSCalendar, UICollectionViewDiffableDataSource, _UIDatePickerCalendarMonthSet, _UIDatePickerCalendarDaySet;

@interface _UIDatePickerCalendarViewDataSourceController : NSObject {
    NSCalendar *_calendar;
    UICollectionViewDiffableDataSource *_dataSource;
    _UIDatePickerCalendarMonthSet *_loadedMonthSet;
    _UIDatePickerCalendarDaySet *_loadedDaySet;
}

- (void).cxx_destruct;
- (id)_loadedDays;
- (id)_loadedMonths;
- (void)_reloadDataSourceWithScrollPosition:(id)a0;
- (id)initWithCalendar:(id)a0 dataSource:(id)a1;
- (void)reloadDataSourceAroundMonth:(id)a0;
- (long long)cleanupDataSourceWithScrollPositionIfNecessary:(id)a0;
- (long long)prepareDataSourceWithScrollPositionIfNecessary:(id)a0;

@end
