@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject

@property (readonly, nonatomic) NSMutableArray *dismissalDictionariesAndFeeds;
@property (readonly, nonatomic) NSMutableDictionary *dismissalIDToFeeds;

- (void)removeBulletinMatch:(id)a0;
- (id)init;
- (id)description;
- (id)findBulletinMatch:(id)a0;
- (void).cxx_destruct;
- (void)cacheDismissalDictionaries:(id)a0 dismissalIDs:(id)a1 forFeeds:(unsigned long long)a2;
- (id)purgeExpired;

@end
