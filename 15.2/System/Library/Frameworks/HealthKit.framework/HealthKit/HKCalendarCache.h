@class NSMutableDictionary, NSCalendar;

@interface HKCalendarCache : NSObject {
    NSMutableDictionary *_calendarsByTimeZoneName;
    NSCalendar *_test_currentCalendar;
}

+ (id)earliestTimeZoneCalendar;
+ (id)latestTimeZoneCalendar;

- (void)_test_setCurrentCalendar:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)calendarForTimeZone:(id)a0;
- (id)currentCalendar;

@end
