@class NSString, GKCDGameFriendList;

@interface GKCDGameFriend : NSManagedObject

@property (copy, nonatomic) NSString *gamePlayerID;
@property (copy, nonatomic) NSString *playerID;
@property (copy, nonatomic) NSString *teamPlayerID;
@property (retain, nonatomic) GKCDGameFriendList *list;

+ (id)fetchRequest;

@end
