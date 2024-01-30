@class NSCalendar, NSMutableDictionary;

@interface _UIDatePickerCalendarDaySet : NSObject {
    NSCalendar *_calendar;
    NSMutableDictionary *_loadedDays;
}

- (void).cxx_destruct;
- (id)loadedDays;
- (id)_createDaysForMonth:(id)a0;
- (id)_partialDaysForMonth:(id)a0 atBeginningOfMonth:(BOOL)a1 count:(unsigned long long)a2;
- (id)initWithCalendar:(id)a0;
- (void)cleanupDaysKeepingDaysForMonths:(id)a0;
- (id)daysForMonth:(id)a0 includingOverlapDays:(BOOL)a1;

@end
