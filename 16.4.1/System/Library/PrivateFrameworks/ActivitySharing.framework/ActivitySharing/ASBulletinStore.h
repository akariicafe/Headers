@class NSArray;

@interface ASBulletinStore : NSObject

@property (readonly, nonatomic) NSArray *bulletins;

- (void).cxx_destruct;
- (void)removeAllBulletins;
- (void)_persistBulletins;
- (void)addBulletins:(id)a0;
- (void)loadBulletins;
- (void)removeBulletinsMatchingCriteria:(id /* block */)a0;
- (void)removeBulletinsOlderThanInterval:(double)a0;

@end
