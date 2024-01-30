@class NSString, NSDate;

@interface GKCDGameSettings : NSManagedObject

@property (copy, nonatomic) NSString *allowFriendListAccess;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSDate *timeStamp;

+ (id)fetchRequest;

@end
