@class NSString, NSSet;

@interface ManagedCatalogProgramReference : NSManagedObject

@property (nonatomic, copy) NSString *contentRating;
@property (nonatomic, copy) NSString *dateReleased;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *contributorIdentifiers;
@property (nonatomic, retain) NSSet *equipmentIdentifiers;
@property (nonatomic, retain) NSSet *modalityIdentifiers;
@property (nonatomic, retain) NSSet *musicGenreIdentifiers;
@property (nonatomic, retain) NSSet *themeIdentifiers;
@property (nonatomic, retain) NSSet *trainerIdentifiers;
@property (nonatomic, retain) NSSet *workoutIdentifiers;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
