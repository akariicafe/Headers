@class NSMutableDictionary;

@interface BLTHashCache : NSObject {
    NSMutableDictionary *_cacheBySectionID;
}

- (id)init;
- (void).cxx_destruct;
- (void)_updateCacheWithItems:(id)a0 forSectionID:(id)a1 matchID:(id)a2 result:(id /* block */)a3;
- (void)updateCacheWithItems:(id)a0 forSectionID:(id)a1 matchID:(id)a2 result:(id /* block */)a3;

@end
