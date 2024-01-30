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

- (void)goForward;
- (id)itemAtIndex:(int)a0;
- (void)goBack;
- (void)addItem:(id)a0;
- (void)setToMatchDictionaryRepresentation:(id)a0;
- (void)_close;
- (void)removeItem:(id)a0;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)containsItem:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithBackForwardList:(void *)a0;
- (void)goToItem:(id)a0;
- (id)backListWithLimit:(int)a0;
- (id)forwardListWithLimit:(int)a0;
- (void)setPageCacheSize:(unsigned long long)a0;
- (unsigned long long)pageCacheSize;

@end
