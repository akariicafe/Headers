@class NSSet, GKGameCacheObject;

@interface FriendPlayedGameEntry : NSManagedObject

@property (retain, nonatomic) NSSet *friendsPlayed;
@property (retain, nonatomic) GKGameCacheObject *game;

+ (id)fetchRequest;

@end
