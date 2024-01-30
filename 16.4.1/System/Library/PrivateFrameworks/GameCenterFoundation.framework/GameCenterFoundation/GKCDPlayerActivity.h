@class NSData, NSString, NSDate;

@interface GKCDPlayerActivity : NSManagedObject

@property (retain, nonatomic) NSData *activityData;
@property (copy, nonatomic) NSString *continuation;
@property (copy, nonatomic) NSString *gameCategoryFilter;
@property (copy, nonatomic) NSString *gameID;
@property (copy, nonatomic) NSString *targetPlayerID;
@property (copy, nonatomic) NSDate *timeToLive;
@property (copy, nonatomic) NSString *version;

+ (id)fetchRequest;

@end
