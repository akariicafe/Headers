@class NSString, NSArray, CalDAVScheduleResponseItem;

@interface CalDAVScheduleTask : CoreDAVPostTask

@property (retain, nonatomic) CalDAVScheduleResponseItem *scheduleResponse;
@property (retain, nonatomic) NSString *originator;
@property (retain, nonatomic) NSArray *attendees;

- (void).cxx_destruct;
- (void)finishCoreDAVTaskWithError:(id)a0;
- (id)copyDefaultParserForContentType:(id)a0;
- (id)initWithOriginator:(id)a0 attendees:(id)a1 outboxURL:(id)a2 payload:(id)a3;

@end
