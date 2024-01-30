@class NSString, ManagedCatalogWorkoutReference, ManagedCatalogProgramReference;

@interface ManagedOrderedIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) int index;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramContributors;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramEquipment;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramModalities;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramMusicGenres;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramThemes;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramTrainers;
@property (nonatomic, retain) ManagedCatalogProgramReference *catalogProgramWorkouts;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutBodyFocuses;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutContributors;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutEquipment;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutMusicGenres;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutSkillLevels;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutThemes;
@property (nonatomic, retain) ManagedCatalogWorkoutReference *catalogWorkoutTrainers;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
