@class NSString, ManagedCatalogProgramMetadata, ManagedLanguageDisclaimer, ManagedCatalogWorkoutMetadata;

@interface ManagedCatalogAccessibilityFeature : NSManagedObject

@property (nonatomic, copy) NSString *feature;
@property (nonatomic, retain) ManagedCatalogProgramMetadata *catalogProgramMetadata;
@property (nonatomic, retain) ManagedCatalogWorkoutMetadata *catalogWorkoutMetadata;
@property (nonatomic, retain) ManagedLanguageDisclaimer *languageDisclaimer;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
