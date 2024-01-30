@class ManagedCatalogWorkoutMetadata, NSString, ManagedCatalogProgramMetadata, ManagedTrainerMetadata, ManagedCatalogModalityMetadata;

@interface ManagedCatalogPreview : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *streamingProgramIdentifier;
@property (nonatomic, copy) NSString *streamingURL;
@property (nonatomic, retain) ManagedCatalogModalityMetadata *catalogModalityMetadata;
@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, retain) ManagedTrainerMetadata *trainerMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
