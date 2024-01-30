@class WBSHistory, NSArray, NSMutableDictionary, WBSHistorySessionIntervalCache, NSObject;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionController : NSObject <WBSHistorySessions> {
    NSObject<OS_dispatch_queue> *_sessionCacheAccessQueue;
    NSMutableDictionary *_itemsBySession;
    NSArray *_orderedSessions;
    WBSHistorySessionIntervalCache *_intervalCache;
}

@property (readonly, nonatomic) WBSHistory *history;
@property (readonly, copy, nonatomic) NSArray *orderedSessions;
@property (readonly, nonatomic) unsigned long long numberOfSessions;

+ (id)sharedSessionController;

- (id)initWithHistory:(id)a0;
- (void)_historyItemsWereRemoved:(id)a0;
- (void).cxx_destruct;
- (id)sessionForItem:(id)a0;
- (void)_addItemsToSessionCache:(id)a0 shouldPostChangeNotification:(BOOL)a1;
- (void)_clearSessionCache;
- (void)_dispatchHistorySessionsDidChangeNotification;
- (BOOL)_getKey:(id *)a0 forDate:(double)a1;
- (void)_historyItemsWereAdded:(id)a0;
- (unsigned long long)_insertItem:(id)a0 withSessionKey:(id)a1;
- (void)_loadSessionCache;
- (id)_orderedSessionKeys;
- (void)_removeItemsFromSessionCache:(id)a0;
- (void)_requestSessionKeyForDate:(id)a0 withBlock:(id /* block */)a1;
- (void)_timeZoneDidChange:(id)a0;
- (void)enumerateOrderedItemsLastVisitedInSession:(id)a0 usingBlock:(id /* block */)a1;
- (id)itemLastVisitedInSession:(id)a0 atIndex:(unsigned long long)a1;
- (id)itemsLastVisitedInSession:(id)a0;
- (unsigned long long)numberOfItemsVisitedInSession:(id)a0;
- (void)orderedItemsNewerThanDate:(id)a0 maxCount:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
