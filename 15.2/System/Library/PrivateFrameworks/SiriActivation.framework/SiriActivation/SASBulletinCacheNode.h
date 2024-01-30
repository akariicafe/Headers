@class AFBulletin;

@interface SASBulletinCacheNode : NSObject

@property (retain, nonatomic) AFBulletin *bulletin;
@property (retain, nonatomic) SASBulletinCacheNode *previousNode;
@property (retain, nonatomic) SASBulletinCacheNode *nextNode;

- (void).cxx_destruct;

@end
