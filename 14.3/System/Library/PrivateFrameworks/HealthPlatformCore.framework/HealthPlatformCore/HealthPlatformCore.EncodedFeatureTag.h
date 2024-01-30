@class NSData, NSString, _TtC18HealthPlatformCore8FeedItem;

@interface HealthPlatformCore.EncodedFeatureTag : NSManagedObject

@property (nonatomic, copy) NSData *data;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) _TtC18HealthPlatformCore8FeedItem *feedItem;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
