@class NSString, _TtC18HealthPlatformCore4Feed, NSOrderedSet;

@interface HealthPlatformCore.FeedSection : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _TtC18HealthPlatformCore4Feed *feed;
@property (nonatomic, retain) NSOrderedSet *feedItems;
@property (nonatomic) BOOL isCollapsible;
@property (nonatomic) long long sortOrder;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
