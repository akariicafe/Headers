@class NSString, ManagedContributor, ManagedTrainerMetadata;

@interface ManagedSocialMediaHandle : NSManagedObject

@property (nonatomic, copy) NSString *platform;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, retain) ManagedContributor *contributor;
@property (nonatomic, retain) ManagedTrainerMetadata *trainerMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
