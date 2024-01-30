@class NSString, NSSet;

@interface ManagedSocialMediaHandle : NSManagedObject

@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, retain) NSSet *contributor;
@property (nonatomic, retain) NSSet *trainerMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
