@class NSString, ManagedCatalogProgramMetadata, NSSet, ManagedCatalogWorkoutMetadata;

@interface ManagedContributor : NSManagedObject

@property (nonatomic, copy) NSString *bio;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *role;
@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, retain) NSSet *socialMediaHandles;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
