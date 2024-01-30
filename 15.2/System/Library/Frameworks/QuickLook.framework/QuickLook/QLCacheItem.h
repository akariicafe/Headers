@class NSMutableArray, QLItem;

@interface QLCacheItem : NSObject {
    NSMutableArray *_handlers;
}

@property (retain, nonatomic) QLItem *item;

- (void)addCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidate;
- (void)_performHandlers;

@end
