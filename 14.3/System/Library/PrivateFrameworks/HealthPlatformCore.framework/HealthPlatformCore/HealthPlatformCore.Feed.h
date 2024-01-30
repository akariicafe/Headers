@class NSString, NSOrderedSet, NSDate;

@interface HealthPlatformCore.Feed : NSManagedObject

@property (nonatomic, copy) NSDate *dateUpdated;
@property (nonatomic, copy) NSString *kindRawValue;
@property (nonatomic, retain) NSOrderedSet *sections;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
