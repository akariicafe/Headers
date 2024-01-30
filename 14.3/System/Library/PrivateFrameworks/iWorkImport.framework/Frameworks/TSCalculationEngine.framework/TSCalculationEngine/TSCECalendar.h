@class NSCalendar;

@interface TSCECalendar : NSObject {
    NSCalendar *_calendar;
}

- (id)components:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)dateByAddingComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)components:(unsigned long long)a0 fromDate:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)dateFromComponents:(id)a0;
- (id)initWithCalendarIdentifier:(id)a0 timeZone:(id)a1;
- (id)dateWithIdenticalComponentsInGMTForDate:(id)a0;
- (void)extractComponentsFromDate:(id)a0 year:(long long *)a1 month:(long long *)a2 day:(long long *)a3;
- (void)extractComponentsFromDate:(id)a0 year:(long long *)a1 month:(long long *)a2 day:(long long *)a3 hour:(long long *)a4 minute:(long long *)a5 second:(long long *)a6;

@end
