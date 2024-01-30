@class NSMutableArray;

@interface CommunicationsFilterBlockListCache : NSObject {
    NSMutableArray *_recentItems;
    int _notifyEmptyListToken;
    BOOL _listIsEmpty;
}

- (void)syncListEmptyState;
- (void)removeItemFromCache:(id)a0;
- (id)init;
- (long long)cachedResponseForItem:(id)a0;
- (void)_blockListChanged:(id)a0;
- (void)setResponse:(BOOL)a0 forItem:(id)a1;

@end
