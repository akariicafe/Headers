@class NSSet, GKGameCacheObject, NSDate;

@interface FriendsPlayedGameList : NSManagedObject

@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSSet *entries;
@property (retain, nonatomic) GKGameCacheObject *game;

+ (id)fetchRequest;

@end
