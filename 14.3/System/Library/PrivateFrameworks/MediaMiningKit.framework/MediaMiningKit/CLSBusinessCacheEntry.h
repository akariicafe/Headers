@class NSString, NSSet;

@interface CLSBusinessCacheEntry : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) double radius;
@property (nonatomic) double updateTimestamp;
@property (retain, nonatomic) NSSet *businessItems;

@end
