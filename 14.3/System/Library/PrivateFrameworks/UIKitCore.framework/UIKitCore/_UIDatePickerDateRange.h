@class NSDate;

@interface _UIDatePickerDateRange : NSObject {
    struct { unsigned char ignoresRange : 1; } _flags;
}

@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;

- (BOOL)containsDate:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithStartDate:(id)a0 endDate:(id)a1;
- (BOOL)_containsDate:(id)a0 withAccuracy:(unsigned long long)a1 inCalendar:(id)a2;
- (BOOL)containsDay:(id)a0;
- (BOOL)containsMonth:(id)a0;
- (id)dateInRangeForDate:(id)a0;

@end
