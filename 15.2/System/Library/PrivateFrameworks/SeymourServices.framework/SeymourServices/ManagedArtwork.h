@class ManagedCatalogWorkoutMetadata, NSString, ManagedCatalogProgramMetadata, ManagedTrainerReference, ManagedMediaMoment, ManagedMusicTrack, ManagedCatalogModalityMetadata;

@interface ManagedArtwork : NSManagedObject

@property (nonatomic, copy) NSString *backgroundColor;
@property (nonatomic, copy) NSString *flavor;
@property (nonatomic) int height;
@property (nonatomic, copy) NSString *template;
@property (nonatomic, copy) NSString *textColor;
@property (nonatomic) int width;
@property (nonatomic, retain) ManagedCatalogModalityMetadata *catalogModalityMetadata;
@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, retain) ManagedTrainerReference *contributorReference;
@property (nonatomic, retain) ManagedMediaMoment *mediaMoment;
@property (nonatomic, retain) ManagedMusicTrack *musicTrack;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
