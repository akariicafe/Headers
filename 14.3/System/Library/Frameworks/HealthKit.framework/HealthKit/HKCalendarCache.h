@class NSMutableDictionary, NSCalendar;

@interface HKCalendarCache : NSObject {
    NSMutableDictionary *_calendarsByTimeZoneName;
    NSCalendar *_test_currentCalendar;
}

+ (id)latestTimeZoneCalendar;
+ (id)earliestTimeZoneCalendar;

- (id)init;
- (void).cxx_destruct;
- (id)calendarForTimeZone:(id)a0;
- (void)_test_setCurrentCalendar:(id)a0;
- (id)currentCalendar;

@end
