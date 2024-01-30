@class NSString;

@interface ManagedEngagementBadge : NSManagedObject

@property (nonatomic, copy) NSString *identifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
