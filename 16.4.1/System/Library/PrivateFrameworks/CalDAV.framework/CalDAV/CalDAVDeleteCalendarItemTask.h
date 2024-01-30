@class NSString;

@interface CalDAVDeleteCalendarItemTask : CoreDAVDeleteTask

@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)additionalHeaderValues;
- (id)description;
- (void).cxx_destruct;

@end
