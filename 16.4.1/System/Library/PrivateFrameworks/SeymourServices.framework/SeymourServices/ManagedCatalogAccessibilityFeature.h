@class NSString, NSSet;

@interface ManagedCatalogAccessibilityFeature : NSManagedObject

@property (nonatomic, copy) NSString *feature;
@property (nonatomic, retain) NSSet *catalogProgramMetadata;
@property (nonatomic, retain) NSSet *catalogWorkoutMetadata;
@property (nonatomic, retain) NSSet *languageDisclaimer;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
