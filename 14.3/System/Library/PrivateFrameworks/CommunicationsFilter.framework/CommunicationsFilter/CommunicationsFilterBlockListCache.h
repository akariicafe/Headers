@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    BOOL _listIsEmpty;
}

- (id)init;
- (void)removeItemFromCache:(id)a0;
- (void)setResponse:(BOOL)a0 forItem:(id)a1;
- (void)syncListEmptyState;
- (long long)cachedResponseForItem:(id)a0;
- (void)_blockListChanged:(id)a0;

@end
