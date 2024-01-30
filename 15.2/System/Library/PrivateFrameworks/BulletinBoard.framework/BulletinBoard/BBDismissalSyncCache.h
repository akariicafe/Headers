@class NSMutableDictionary, NSDate;

@interface BBDismissalSyncCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSDate *timeToCheck;

- (BOOL)_isTimeToCheck;
- (id)description;
- (void)cacheDismissalDictionaries:(id)a0 dismissalIDs:(id)a1 inSection:(id)a2 forFeeds:(unsigned long long)a3;
- (id)findBulletinMatch:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_checkCache;
- (void)removeBulletinMatch:(id)a0;

@end
