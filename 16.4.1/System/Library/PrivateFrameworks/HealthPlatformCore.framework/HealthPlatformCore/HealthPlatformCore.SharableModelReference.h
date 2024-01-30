@class NSString, _TtC18HealthPlatformCore8FeedItem;

@interface HealthPlatformCore.SharableModelReference : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) _TtC18HealthPlatformCore8FeedItem *feedItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
