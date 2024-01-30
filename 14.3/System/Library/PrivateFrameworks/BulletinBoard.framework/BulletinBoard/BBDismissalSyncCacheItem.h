@class NSMutableArray, NSMutableDictionary;

@interface BBDismissalSyncCacheItem : NSObject

@property (readonly, nonatomic) NSMutableArray *dismissalDictionariesAndFeeds;
@property (readonly, nonatomic) NSMutableDictionary *dismissalIDToFeeds;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)cacheDismissalDictionaries:(id)a0 dismissalIDs:(id)a1 forFeeds:(unsigned long long)a2;
- (id)findBulletinMatch:(id)a0;
- (void)removeBulletinMatch:(id)a0;
- (id)purgeExpired;

@end
