@class NSString, ManagedCatalogWorkoutMetadata;

@interface ManagedTrainerEvent : NSManagedObject

@property (nonatomic) double duration;
@property (nonatomic) double leadDuration;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
