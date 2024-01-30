@class NSMutableDictionary, NSCalendar;

@interface HKCalendarCache : NSObject {
    NSMutableDictionary *_calendarsByTimeZoneName;
    NSCalendar *_test_currentCalendar;
}

+ (id)earliestTimeZoneCalendar;
+ (id)latestTimeZoneCalendar;

- (void)_test_setCurrentCalendar:(id)a0;
- (id)calendarForTimeZone:(id)a0;
- (id)init;
- (id)currentCalendar;
- (void).cxx_destruct;

@end
