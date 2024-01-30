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

- (void).cxx_destruct;
- (id)requestBody;
- (id)url;
- (id)description;
- (id)additionalHeaderValues;
- (id)httpMethod;
- (id)updatedETag;
- (id)updatedScheduleTag;
- (id)_recurrenceDateString;
- (id)urlWithQuery;
- (void)_updateBothResponseItems;
- (id)_dataForItem:(id)a0;
- (id)_etagForItem:(id)a0;
- (id)_scheduleTagForItem:(id)a0;
- (id)_documentForItem:(id)a0;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;
- (id)updatedICSDocument;
- (id)createdURL;
- (id)createdETag;
- (id)createdScheduleTag;
- (id)createdICSDocument;
- (id)createdICSData;

@end
