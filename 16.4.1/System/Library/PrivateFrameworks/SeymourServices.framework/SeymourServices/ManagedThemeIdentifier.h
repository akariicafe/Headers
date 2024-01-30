@class NSString, NSSet;

@interface ManagedThemeIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogProgramThemes;
@property (nonatomic, retain) NSSet *catalogWorkoutThemes;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
