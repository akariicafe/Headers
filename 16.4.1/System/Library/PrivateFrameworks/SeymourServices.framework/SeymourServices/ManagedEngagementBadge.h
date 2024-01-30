@class NSString, NSDate;

@interface ManagedEngagementBadge : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *marketingItemID;
@property (nonatomic, copy) NSString *notificationID;
@property (nonatomic, copy) NSDate *receivedDate;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
