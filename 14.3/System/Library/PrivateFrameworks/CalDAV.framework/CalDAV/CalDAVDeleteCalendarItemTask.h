@class NSString;

@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask

@property (retain, nonatomic) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (id)description;
- (id)additionalHeaderValues;

@end
