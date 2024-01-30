@class NSString;
@protocol CalDAVPutCalendarItemTaskDelegate;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask

@property (nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (void).cxx_destruct;
- (id)description;
- (id)additionalHeaderValues;

@end
