@class NSMutableDictionary;

@interface BLTHashCache : NSObject {
    NSMutableDictionary *_cacheBySectionID;
}

- (void).cxx_destruct;
- (id)init;
- (void)_updateCacheWithItems:(id)a0 forSectionID:(id)a1 matchID:(id)a2 result:(id /* block */)a3;
- (void)updateCacheWithItems:(id)a0 forSectionID:(id)a1 matchID:(id)a2 result:(id /* block */)a3;

@end
