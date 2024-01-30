@class NSArray;

@interface ASBulletinStore : NSObject

@property (readonly, nonatomic) NSArray *bulletins;

- (id)init;
- (void).cxx_destruct;
- (void)removeAllBulletins;
- (void)_persistBulletins;
- (void)addBulletins:(id)a0;
- (void)removeBulletinsMatchingCriteria:(id /* block */)a0;

@end
