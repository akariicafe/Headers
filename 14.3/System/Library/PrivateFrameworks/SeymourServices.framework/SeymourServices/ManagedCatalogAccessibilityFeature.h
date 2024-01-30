@class NSString, ManagedCatalogWorkoutMetadata, ManagedCatalogProgramMetadata;

@interface ManagedCatalogAccessibilityFeature : NSManagedObject

@property (nonatomic, copy) NSString *feature;
@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
