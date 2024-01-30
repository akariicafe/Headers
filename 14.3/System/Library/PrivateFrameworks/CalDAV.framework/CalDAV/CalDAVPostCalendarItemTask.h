@class NSString;
@protocol CalDAVPostCalendarItemTaskDelegate;

@interface CalDAVPostCalendarItemTask : CoreDAVPostTask

@property (nonatomic) id<CalDAVPostCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (id)description;
- (id)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(id)a0;

@end
