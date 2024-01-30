@class NSMutableDictionary, NSDate;

@interface BBDismissalSyncCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSDate *timeToCheck;

- (void)_checkCache;
- (BOOL)_isTimeToCheck;
- (void)cacheDismissalDictionaries:(id)a0 dismissalIDs:(id)a1 inSection:(id)a2 forFeeds:(unsigned long long)a3;
- (void)removeBulletinMatch:(id)a0;
- (id)init;
- (id)description;
- (id)findBulletinMatch:(id)a0;
- (void).cxx_destruct;

@end
