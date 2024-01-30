@class CLSHolidayCalendarEventService;

@interface PGHolidayMemoryTrigger : PGMemoryTrigger

@property (readonly, nonatomic) CLSHolidayCalendarEventService *holidayService;

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)a0 holidayService:(id)a1;

@end
