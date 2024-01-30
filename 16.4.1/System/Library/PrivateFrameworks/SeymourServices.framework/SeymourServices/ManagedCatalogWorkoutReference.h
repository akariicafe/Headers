@class NSString, NSOrderedSet;

@interface ManagedCatalogWorkoutReference : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic) double duration;
@property (nonatomic) int episode;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *mediaType;
@property (nonatomic, copy) NSString *modalityIdentifier;
@property (nonatomic, retain) NSOrderedSet *bodyFocusIdentifierss;
@property (nonatomic, retain) NSOrderedSet *contributorIdentifierss;
@property (nonatomic, retain) NSOrderedSet *equipmentIdentifierss;
@property (nonatomic, retain) NSOrderedSet *musicGenreIdentifierss;
@property (nonatomic, retain) NSOrderedSet *skillLevelIdentifierss;
@property (nonatomic, retain) NSOrderedSet *themeIdentifierss;
@property (nonatomic, retain) NSOrderedSet *trainerIdentifierss;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
