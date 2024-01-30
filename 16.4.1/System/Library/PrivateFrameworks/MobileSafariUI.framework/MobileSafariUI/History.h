@class NSString, NSMutableArray, _WKVisitedLinkStore;

@interface History : WBUHistory <WKHistoryDelegatePrivate> {
    NSMutableArray *_deferredUpdates;
    _WKVisitedLinkStore *_visitedLinkStore;
}

@property (readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)sessionIdentifierFromDate:(id)a0;
+ (id)titleForHistoryItem:(id)a0;
+ (BOOL)historyItemURL:(id)a0 matchesFilter:(id)a1;
+ (id)dayWithPeriodOfDayStringForDate:(id)a0;
+ (void)localeChanged:(struct __CFLocale { } *)a0;
+ (id)lowercaseStringTrimmedForHistorySearch:(id)a0;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })hourRangeFromPartOfDay:(long long)a0;
+ (BOOL)historyItemTitle:(id)a0 matchesFilterString:(id)a1;
+ (id)sessionStartDateFromDate:(id)a0;
+ (BOOL)historyItemURL:(id)a0 matchesFilterStrings:(id)a1;
+ (id)sharedHistory;
+ (id)_localizedStringForTodayWithPartOfDay:(long long)a0;
+ (id)sessionIdentifierFromSessionStartDate:(id)a0;
+ (id)_localizedStringForWeekday:(long long)a0 partOfDay:(long long)a1;
+ (long long)partOfDayFromHourOfDay:(long long)a0;

- (void)removeItem:(id)a0;
- (void)_webView:(id)a0 didPerformServerRedirectFromURL:(id)a1 toURL:(id)a2;
- (Class)_historyItemClass;
- (BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)a0;
- (id)titleForDate:(id)a0;
- (void)_removeAllVisitedLinks;
- (void)commitDeferredUpdates;
- (void)_webView:(id)a0 didNavigateWithNavigationData:(id)a1;
- (void)dealloc;
- (void)_updateForWKWebView:(id)a0 browserController:(id)a1 updates:(id /* block */)a2;
- (void)cancelDeferredUpdates;
- (id)_weekdayMonthDateStringForDate:(id)a0;
- (void)_addVisitedLinkForItemIfNeeded:(id)a0 withVisitOrigin:(long long)a1;
- (void)removeItems:(id)a0 completionHanlder:(id /* block */)a1;
- (void).cxx_destruct;
- (void)_webView:(id)a0 didUpdateHistoryTitle:(id)a1 forURL:(id)a2;
- (void)_webView:(id)a0 didPerformClientRedirectFromURL:(id)a1 toURL:(id)a2;

@end
