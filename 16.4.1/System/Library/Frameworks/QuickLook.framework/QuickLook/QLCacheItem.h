@class NSMutableArray, QLItem;

@interface QLCacheItem : NSObject {
    NSMutableArray *_handlers;
}

@property (retain, nonatomic) QLItem *item;

- (void)addCompletionHandler:(id /* block */)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_performHandlers;

@end
