@class NSString, NSSet;

@interface ManagedLanguageDisclaimer : NSManagedObject

@property (nonatomic) BOOL isPrimary;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *capabilities;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
