@class NSSet, NSData, NSUUID;

@interface HealthPlatformCore.Profile : NSManagedObject

@property (nonatomic, copy) NSSet *allPluginData;
@property (nonatomic, copy) NSData *encodedHKProfileIdentifier;
@property (nonatomic, copy) NSSet *feedItems;
@property (nonatomic, copy) NSUUID *uniqueIdentifier;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
