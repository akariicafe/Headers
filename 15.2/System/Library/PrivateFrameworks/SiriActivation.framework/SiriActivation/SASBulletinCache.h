@class SASBulletinCacheNode;

@interface SASBulletinCache : NSObject {
    unsigned long long _count;
    SASBulletinCacheNode *_oldestNode;
    SASBulletinCacheNode *_newestNode;
}

- (id)allBulletins;
- (void)_deleteNode:(id)a0;
- (id)_findNodeForBulletinID:(id)a0;
- (id)cachedBulletinForID:(id)a0;
- (void)_purgeOldestNodes;
- (void).cxx_destruct;
- (id)init;
- (void)insertBulletin:(id)a0 fromFeed:(unsigned long long)a1;
- (BOOL)removeBulletinForID:(id)a0;
- (BOOL)_isFeedRelevant:(unsigned long long)a0;

@end
