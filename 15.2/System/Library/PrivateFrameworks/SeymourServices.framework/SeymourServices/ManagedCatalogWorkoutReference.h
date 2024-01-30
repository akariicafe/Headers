@class NSString, NSSet;

@interface ManagedCatalogWorkoutReference : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic) double duration;
@property (nonatomic) int episode;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic, retain) NSSet *bodyFocusIdentifiers;
@property (nonatomic, retain) NSSet *contributorIdentifiers;
@property (nonatomic, retain) NSSet *equipmentIdentifiers;
@property (nonatomic, retain) NSSet *musicGenreIdentifiers;
@property (nonatomic, retain) NSSet *skillLevelIdentifiers;
@property (nonatomic, retain) NSSet *themeIdentifiers;
@property (nonatomic, retain) NSSet *trainerIdentifiers;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
