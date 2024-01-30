@class _TtC18HealthPlatformCore7Profile, NSString, NSOrderedSet, NSDate;

@interface HealthPlatformCore.Feed : NSManagedObject

@property (nonatomic, copy) NSDate *dateUpdated;
@property (nonatomic, retain) _TtC18HealthPlatformCore7Profile *associatedProfile;
@property (nonatomic, copy) NSString *kindRawValue;
@property (nonatomic, retain) NSOrderedSet *sections;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
