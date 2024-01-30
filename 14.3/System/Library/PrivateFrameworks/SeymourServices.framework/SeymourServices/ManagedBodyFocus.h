@class NSString, ManagedCatalogWorkoutMetadata;

@interface ManagedBodyFocus : NSManagedObject

@property (nonatomic, copy) NSString *focus;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
