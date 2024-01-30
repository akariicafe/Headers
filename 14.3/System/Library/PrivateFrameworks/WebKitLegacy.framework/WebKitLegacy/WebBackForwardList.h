@class WebHistoryItem, WebBackForwardListPrivate;

@interface WebBackForwardList : NSObject {
    WebBackForwardListPrivate *_private;
}

@property (readonly, nonatomic) WebHistoryItem *backItem;
@property (readonly, nonatomic) WebHistoryItem *currentItem;
@property (readonly, nonatomic) WebHistoryItem *forwardItem;
@property (nonatomic) int capacity;
@property (readonly, nonatomic) int backListCount;
@property (readonly, nonatomic) int forwardListCount;

+ (void)initialize;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (void)goBack;
- (id)init;
- (void)dealloc;
- (id)itemAtIndex:(int)a0;
- (void)goForward;
- (id)description;
- (void)setToMatchDictionaryRepresentation:(id)a0;
- (BOOL)containsItem:(id)a0;
- (void)_close;
- (id)dictionaryRepresentation;
- (id)initWithBackForwardList:(struct Ref<BackForwardList, WTF::DumbPtrTraits<BackForwardList> > { struct BackForwardList *x0; } *)a0;
- (void)goToItem:(id)a0;
- (id)backListWithLimit:(int)a0;
- (id)forwardListWithLimit:(int)a0;
- (void)setPageCacheSize:(unsigned long long)a0;
- (unsigned long long)pageCacheSize;

@end
