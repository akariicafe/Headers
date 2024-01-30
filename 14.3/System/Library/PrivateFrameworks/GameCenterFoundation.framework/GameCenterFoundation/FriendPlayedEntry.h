@class GKPlayerProfileCacheObject, NSDate;

@interface FriendPlayedEntry : NSManagedObject

@property (copy, nonatomic) NSDate *playedAt;
@property (retain, nonatomic) GKPlayerProfileCacheObject *friend;

+ (id)fetchRequest;

@end
