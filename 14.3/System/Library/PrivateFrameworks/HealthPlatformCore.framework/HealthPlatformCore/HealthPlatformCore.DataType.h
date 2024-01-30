@class NSSet;

@interface HealthPlatformCore.DataType : NSManagedObject

@property (nonatomic) long long codeRaw;
@property (nonatomic, copy) NSSet *feedItems;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
