@class _WKVisitedLinkStore, NSString, NSCalendar, NSMutableArray;

@interface History : WBUHistory <WKHistoryDelegatePrivate> {
    NSMutableArray *_deferredUpdates;
    NSCalendar *_calendar;
    struct __CFDateFormatter { } *_weekdayMonthDateFormatter;
    _WKVisitedLinkStore *_visitedLinkStore;
}

@property (readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dayWithPeriodOfDayStringForDate:(id)a0;
+ (id)titleForHistoryItem:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })hourRangeFromPartOfDay:(long long)a0;
+ (id)sharedHistory;
+ (id)_localizedStringForWeekday:(long long)a0 partOfDay:(long long)a1;
+ (id)_localizedStringForTodayWithPartOfDay:(long long)a0;
+ (long long)partOfDayFromHourOfDay:(long long)a0;

- (void)_addVisitedLinksForItemsIfNeeded:(id)a0;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (void)commitDeferredUpdates;
- (void)_removeAllVisitedLinks;
- (void)removeItem:(id)a0;
- (id)_weekdayMonthDateStringForDate:(id)a0;
- (struct __CFDateFormatter { } *)newDateFormatterForLocale:(struct __CFLocale { } *)a0 formatType:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (void)_updateForWKWebView:(id)a0 browserController:(id)a1 updates:(id /* block */)a2;
- (Class)_historyItemClass;
- (void)localeChanged:(struct __CFLocale { } *)a0;
- (void)dealloc;
- (id)titleForDate:(id)a0;
- (void)_webView:(id)a0 didPerformServerRedirectFromURL:(id)a1 toURL:(id)a2;
- (void)_webView:(id)a0 didPerformClientRedirectFromURL:(id)a1 toURL:(id)a2;
- (void)_webView:(id)a0 didNavigateWithNavigationData:(id)a1;
- (void)cancelDeferredUpdates;
- (void)_webView:(id)a0 didUpdateHistoryTitle:(id)a1 forURL:(id)a2;

@end
