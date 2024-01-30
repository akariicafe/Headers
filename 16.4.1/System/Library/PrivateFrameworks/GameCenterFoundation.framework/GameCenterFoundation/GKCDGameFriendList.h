@class NSString, NSOrderedSet, NSDate;

@interface GKCDGameFriendList : NSManagedObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSOrderedSet *entries;

+ (id)fetchRequest;

@end
