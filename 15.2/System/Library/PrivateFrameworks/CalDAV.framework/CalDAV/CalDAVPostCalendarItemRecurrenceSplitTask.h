@class NSString, NSURL, NSDate, CoreDAVResponseItem;

@interface CalDAVPostCalendarItemRecurrenceSplitTask : CoreDAVPropertyFindBaseTask

@property (retain, nonatomic) NSURL *postURLWithQuery;
@property (retain, nonatomic) CoreDAVResponseItem *updatedResponseItem;
@property (retain, nonatomic) CoreDAVResponseItem *createdResponseItem;
@property (retain, nonatomic) NSURL *resourceURL;
@property (retain, nonatomic) NSDate *recurrenceDate;
@property (retain, nonatomic) NSString *uidForCreatedSeries;
@property (retain, nonatomic) NSString *previousScheduleTag;
@property (retain, nonatomic) NSString *previousETag;
@property (nonatomic) BOOL isFloating;
@property (nonatomic) BOOL isAllDay;

- (id)httpMethod;
- (id)requestBody;
- (id)additionalHeaderValues;
- (id)updatedETag;
- (id)url;
- (id)createdURL;
- (id)createdScheduleTag;
- (id)_documentForItem:(id)a0;
- (id)description;
- (id)updatedICSDocument;
- (id)createdICSData;
- (id)_recurrenceDateString;
- (id)createdICSDocument;
- (id)_scheduleTagForItem:(id)a0;
- (void).cxx_destruct;
- (id)urlWithQuery;
- (id)createdETag;
- (id)updatedScheduleTag;
- (id)_etagForItem:(id)a0;
- (id)_dataForItem:(id)a0;
- (void)_updateBothResponseItems;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;

@end
