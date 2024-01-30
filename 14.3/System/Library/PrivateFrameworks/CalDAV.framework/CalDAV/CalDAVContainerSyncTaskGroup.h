@class NSDateComponents;
@protocol CalDAVCalendar;

@interface CalDAVContainerSyncTaskGroup : CoreDAVContainerSyncTaskGroup {
    int _fetchingEtagState;
}

@property (retain, nonatomic) id<CalDAVCalendar> calendar;
@property (nonatomic) BOOL getScheduleTags;
@property (nonatomic) BOOL getScheduleChanges;
@property (nonatomic) BOOL syncEvents;
@property (nonatomic) BOOL syncTodos;
@property (nonatomic) BOOL supportsExtendedCalendarQuery;
@property (nonatomic) BOOL fallbackOnMultiGetError;
@property (retain, nonatomic) NSDateComponents *eventFilterStartDate;
@property (retain, nonatomic) NSDateComponents *eventFilterEndDate;

- (void).cxx_destruct;
- (id)dataContentType;
- (id)copyPutTaskWithPayloadItem:(id)a0 forAction:(id)a1;
- (id)copyAdditionalResourcePropertiesToFetch;
- (id)copyGetEtagTaskWithPropertiesToFind:(id)a0;
- (id)copyMultiGetTaskWithURLs:(id)a0;
- (id)copyGetTaskWithURL:(id)a0;
- (void)applyAdditionalPropertiesFromPutTask:(id)a0;
- (void)applyAdditionalPropertiesFromPostTask:(id)a0;
- (BOOL)shouldFetchResourceWithEtag:(id)a0 propertiesToValues:(id)a1;
- (BOOL)shouldFetchMoreETags;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 accountInfoProvider:(id)a4 taskManager:(id)a5 appSpecificCalendarItemClass:(Class)a6;
- (BOOL)_shouldFetchEventsForState:(int)a0;
- (BOOL)_shouldFetchTodosForState:(int)a0;
- (id)initWithCalendar:(id)a0 accountInfoProvider:(id)a1 taskManager:(id)a2;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 actions:(id)a3 getScheduleTags:(BOOL)a4 getScheduleChanges:(BOOL)a5 accountInfoProvider:(id)a6 taskManager:(id)a7 appSpecificCalendarItemClass:(Class)a8;
- (id)initWithFolderURL:(id)a0 previousCTag:(id)a1 previousSyncToken:(id)a2 getScheduleTags:(BOOL)a3 getScheduleChanges:(BOOL)a4 accountInfoProvider:(id)a5 taskManager:(id)a6;

@end
