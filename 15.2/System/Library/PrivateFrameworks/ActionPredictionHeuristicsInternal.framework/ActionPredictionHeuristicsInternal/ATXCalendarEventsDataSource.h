@class ATXHeuristicDevice;

@interface ATXCalendarEventsDataSource : NSObject {
    ATXHeuristicDevice *_device;
}

- (id)initWithDevice:(id)a0;
- (void).cxx_destruct;
- (void)visibleCalendarsWithCallback:(id /* block */)a0;
- (void)calendarEventsFromStartDate:(id)a0 toEndDate:(id)a1 callback:(id /* block */)a2;

@end
