@class NSString, NSSet;

@interface HealthPlatformCore.Keyword : NSManagedObject

@property (nonatomic) long long sortOrder;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSSet *feedItems;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
