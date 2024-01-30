@class NSCalendar, NSMutableDictionary;

@interface _UIDatePickerCalendarDaySet : NSObject {
    NSCalendar *_calendar;
    NSMutableDictionary *_loadedDays;
}

- (id)initWithCalendar:(id)a0;
- (void).cxx_destruct;
- (id)_createDaysForMonth:(id)a0;
- (id)_partialDaysForMonth:(id)a0 atBeginningOfMonth:(BOOL)a1 count:(unsigned long long)a2;
- (void)cleanupDaysKeepingDaysForMonths:(id)a0;
- (id)daysForMonth:(id)a0 includingOverlapDays:(BOOL)a1;
- (id)loadedDays;

@end
