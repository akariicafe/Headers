@class NSString, NSNumber, NSDate;

@interface ReengagementAchievementEntry : NSManagedObject

@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSDate *lastReportedDate;
@property (copy, nonatomic) NSNumber *percentComplete;
@property (copy, nonatomic) NSString *playerID;

+ (id)fetchRequest;

@end
