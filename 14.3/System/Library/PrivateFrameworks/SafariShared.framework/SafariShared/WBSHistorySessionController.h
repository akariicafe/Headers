@class NSArray, WBSHistory, NSMutableDictionary, WBSHistorySessionIntervalCache, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionController : NSObject <WBSHistorySessions> {
    NSObject<OS_dispatch_queue> *_sessionCacheAccessQueue;
    WBSHistory *_history;
    NSMutableDictionary *_itemsBySession;
    NSArray *_orderedSessions;
    WBSHistorySessionIntervalCache *_intervalCache;
}

@property (readonly, copy, nonatomic) NSArray *orderedSessions;
@property (readonly, nonatomic) unsigned long long numberOfSessions;

+ (id)sharedSessionController;

- (void)_historyItemsWereRemoved:(id)a0;
- (void).cxx_destruct;
- (void)_historyItemsWereAdded:(id)a0;
- (void)_timeZoneDidChange:(id)a0;
- (void)_loadSessionCache;
- (BOOL)_getKey:(id *)a0 forDate:(double)a1;
- (id)_orderedSessionKeys;
- (unsigned long long)_insertItem:(id)a0 withSessionKey:(id)a1;
- (void)_addItemsToSessionCache:(id)a0 shouldPostChangeNotification:(BOOL)a1;
- (void)_removeItemsFromSessionCache:(id)a0;
- (void)_clearSessionCache;
- (void)_dispatchHistorySessionsDidChangeNotification;
- (unsigned long long)numberOfItemsVisitedInSession:(id)a0;
- (id)itemLastVisitedInSession:(id)a0 atIndex:(unsigned long long)a1;
- (id)itemsLastVisitedInSession:(id)a0;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)a0 usingBlock:(id /* block */)a1;
- (void)orderedItemsNewerThanDate:(id)a0 maxCount:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)sessionForItem:(id)a0;
- (void)_requestSessionKeyForDate:(id)a0 withBlock:(id /* block */)a1;
- (id)initWithHistory:(id)a0;

@end
