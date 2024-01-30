@class ManagedCatalogWorkoutMetadata, ManagedArtwork;

@interface ManagedMediaMoment : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic, retain) ManagedArtwork *artwork;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
