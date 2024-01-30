@class NSMutableArray, QLItem;

@interface QLCacheItem : NSObject {
    NSMutableArray *_handlers;
}

@property (retain, nonatomic) QLItem *item;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)a0;
- (void)_performHandlers;
- (void)invalidate;

@end
