@interface HealthExperience.ThreadsafeHKCalendarCache : HKCalendarCache {
    void /* unknown type, empty encoding */ lock;
}

- (void).cxx_destruct;
- (id)init;
- (id)calendarForTimeZone:(id)a0;
- (id)currentCalendar;

@end
