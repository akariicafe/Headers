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

- (id)requestBody;
- (id)additionalHeaderValues;
- (id)createdURL;
- (id)_recurrenceDateString;
- (id)httpMethod;
- (id)createdICSData;
- (id)_scheduleTagForItem:(id)a0;
- (id)createdETag;
- (id)_etagForItem:(id)a0;
- (id)updatedScheduleTag;
- (id)url;
- (id)createdICSDocument;
- (id)urlWithQuery;
- (id)initWithResourceURL:(id)a0 recurrenceDate:(id)a1 floating:(BOOL)a2 allday:(BOOL)a3;
- (id)createdScheduleTag;
- (void)_updateBothResponseItems;
- (id)updatedICSDocument;
- (id)_dataForItem:(id)a0;
- (id)updatedETag;
- (id)description;
- (id)_documentForItem:(id)a0;
- (void).cxx_destruct;

@end
