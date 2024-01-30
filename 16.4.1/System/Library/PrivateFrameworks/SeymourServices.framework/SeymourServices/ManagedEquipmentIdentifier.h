@class NSString, NSSet;

@interface ManagedEquipmentIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogProgramEquipment;
@property (nonatomic, retain) NSSet *catalogWorkoutEquipment;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
