@class NSArray, WebHistoryPrivate;

@interface WebHistory : NSObject {
    WebHistoryPrivate *_historyPrivate;
}

@property (readonly, copy, nonatomic) NSArray *orderedLastVisitedDays;
@property (nonatomic) int historyItemLimit;
@property (nonatomic) int historyAgeInDaysLimit;

+ (id)optionalSharedHistory;
+ (void)setOptionalSharedHistory:(id)a0;
+ (void)_removeAllVisitedLinks;
+ (void)_setVisitedLinkTrackingEnabled:(BOOL)a0;

- (id)_data;
- (id)allItems;
- (id)init;
- (void)dealloc;
- (void)addItems:(id)a0;
- (BOOL)loadFromURL:(id)a0 error:(id *)a1;
- (void)removeItems:(id)a0;
- (void)removeAllItems;
- (id)itemForURL:(id)a0;
- (BOOL)containsURL:(id)a0;
- (void)timeZoneChanged:(id)a0;
- (void)_visitedURL:(id)a0 withTitle:(id)a1 method:(id)a2 wasFailure:(BOOL)a3;
- (id)_itemForURLString:(id)a0;
- (void)_sendNotification:(id)a0 entries:(id)a1;
- (id)orderedItemsLastVisitedOnDay:(id)a0;
- (BOOL)saveToURL:(id)a0 error:(id *)a1;
- (void)_addVisitedLinksToVisitedLinkStore:(struct WebVisitedLinkStore { void /* function */ **x0; unsigned int x1; struct HashSet<WebCore::Page *, WTF::DefaultHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct HashTable<WebCore::Page *, WebCore::Page *, WTF::IdentityExtractor, WTF::DefaultHash<WebCore::Page *>, WTF::HashTraits<WebCore::Page *>, WTF::HashTraits<WebCore::Page *> > { struct Page **x0; } x0; } x2; struct HashSet<unsigned int, WebCore::SharedStringHashHash, WTF::HashTraits<unsigned int> > { struct HashTable<unsigned int, unsigned int, WTF::IdentityExtractor, WebCore::SharedStringHashHash, WTF::HashTraits<unsigned int>, WTF::HashTraits<unsigned int> > { unsigned int *x0; } x0; } x3; BOOL x4; } *)a0;

@end
