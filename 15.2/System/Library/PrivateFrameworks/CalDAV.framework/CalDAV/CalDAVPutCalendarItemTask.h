@class NSString;
@protocol CalDAVPutCalendarItemTaskDelegate;

@interface CalDAVPutCalendarItemTask : CoreDAVPutTask

@property (nonatomic) id<CalDAVPutCalendarItemTaskDelegate> delegate;
@property (retain, nonatomic) NSString *previousScheduleTag;

- (id)additionalHeaderValues;
- (id)description;
- (void).cxx_destruct;

@end
