@class CADStatCollectionContext;

@interface CADStatsCalendars : CADStatCollector {
    CADStatCollectionContext *_context;
    int _totalCalendars;
    int _totalSharedCalendars;
    int _totalCalendarSharees;
    int _totalHolidayCalendars;
    int _totalSubscribedCalendars;
    int _totalCalDAVSubscribedCalendars;
    int _totalAuthenticatedSubscribedCalendars;
}

+ (id)eventName;

- (void).cxx_destruct;
- (id)eventDictionaries;
- (BOOL)calendarUsesAuthentication:(void *)a0;
- (void)prepareWithContext:(id)a0;
- (BOOL)wantsCalendars;
- (void)processCalendars:(id)a0 inStore:(void *)a1;

@end
