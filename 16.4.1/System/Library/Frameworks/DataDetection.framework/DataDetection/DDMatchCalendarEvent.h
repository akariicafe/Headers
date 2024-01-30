@class NSTimeZone, NSDate;

@interface DDMatchCalendarEvent : DDMatch

@property (readonly, nonatomic, getter=isAllDay) BOOL allDay;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSTimeZone *startTimeZone;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSTimeZone *endTimeZone;

- (void).cxx_destruct;
- (id)initWithDDScannerResult:(id)a0;

@end
