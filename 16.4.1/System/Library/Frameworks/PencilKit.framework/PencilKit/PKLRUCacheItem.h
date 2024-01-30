@protocol NSCopying;

@interface PKLRUCacheItem : NSObject {
    id<NSCopying> _key;
    PKLRUCacheItem *_next;
    PKLRUCacheItem *_prev;
    id _object;
    unsigned long long _cost;
}

- (void).cxx_destruct;

@end
