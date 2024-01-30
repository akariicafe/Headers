@class NSMutableDictionary, NSMutableArray;

@interface WebHistoryPrivate : NSObject {
    NSMutableDictionary *_entriesByURL;
    struct unique_ptr<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::DefaultHash<long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > >, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::DefaultHash<long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > > { struct __compressed_pair<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::DefaultHash<long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *, std::__1::default_delete<WTF::HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::DefaultHash<long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > > > { struct HashMap<long long, WTF::RetainPtr<NSMutableArray>, WTF::DefaultHash<long long>, WTF::HashTraits<long long>, WTF::HashTraits<WTF::RetainPtr<NSMutableArray> > > *__value_; } __ptr_; } _entriesByDate;
    NSMutableArray *_orderedLastVisitedDays;
    BOOL itemLimitSet;
    int itemLimit;
    BOOL ageInDaysLimitSet;
    int ageInDaysLimit;
}

+ (void)initialize;

- (BOOL)removeItem:(id)a0;
- (id)allItems;
- (id)init;
- (void).cxx_destruct;
- (id)data;
- (void)dealloc;
- (void)addItems:(id)a0;
- (BOOL)removeItems:(id)a0;
- (id).cxx_construct;
- (id)itemForURLString:(id)a0;
- (BOOL)removeAllItems;
- (id)itemForURL:(id)a0;
- (BOOL)containsURL:(id)a0;
- (BOOL)findKey:(long long *)a0 forDay:(double)a1;
- (BOOL)removeItemFromDateCaches:(id)a0;
- (void)insertItem:(id)a0 forDateKey:(long long)a1;
- (void)addItemToDateCaches:(id)a0;
- (BOOL)removeItemForURLString:(id)a0;
- (BOOL)addItem:(id)a0 discardDuplicate:(BOOL)a1;
- (int)historyAgeInDaysLimit;
- (int)historyItemLimit;
- (id)ageLimitDate;
- (BOOL)loadHistoryGutsFromURL:(id)a0 savedItemsCount:(int *)a1 collectDiscardedItemsInto:(id)a2 error:(id *)a3;
- (id)visitedURL:(id)a0 withTitle:(id)a1;
- (void)rebuildHistoryByDayIfNeeded:(id)a0;
- (id)orderedLastVisitedDays;
- (id)orderedItemsLastVisitedOnDay:(id)a0;
- (void)setHistoryAgeInDaysLimit:(int)a0;
- (void)setHistoryItemLimit:(int)a0;
- (BOOL)loadFromURL:(id)a0 collectDiscardedItemsInto:(id)a1 error:(id *)a2;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (void)addVisitedLinksToVisitedLinkStore:(struct WebVisitedLinkStore { void /* function */ **x0; unsigned int x1; struct HashSet<WebCore::Page *, WTF::DefaultHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct HashTable<WebCore::Page *, WebCore::Page *, WTF::IdentityExtractor, WTF::DefaultHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct Page **x0; } x0; } x2; struct HashSet<unsigned int, WebCore::SharedStringHashHash, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WebCore::SharedStringHashHash, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x0; } x0; } x3; BOOL x4; } *)a0;

@end
